                                            // -- Daily Temperatures -- \\


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res;
        for (int i = 0; i < temperatures.size(); i++) {
            cout << i << endl;
            bool found = false;
            for (int j = 0; j < temperatures.size(); j++) {
                if (i == temperatures.size() - 1 && i == j) {
                    res.push_back(0);

                }
                else if (j > i)
                {
                    if(temperatures[j] > temperatures[i])
                    {
                        res.push_back(j - i);
                        found = true;
                        break;
                    }
                    if (!found && j == temperatures.size()-1) {
                        res.push_back(0);
                    }
                }
            }
        }

        return res;
    }
};
