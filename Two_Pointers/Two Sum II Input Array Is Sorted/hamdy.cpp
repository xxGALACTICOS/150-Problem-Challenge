					    // -- Two Integer Sum II -- \\

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;

        int i = 0;
        int j = numbers.size() - 1;
        while (true) {
            int sum = numbers[i] + numbers[j];
            if (sum == target)
            {
                res.push_back(i + 1);
                res.push_back(j + 1);
                break;
            }
            else if (sum < target)
            {
                i++;
            }
            else
                j--;
        }
        return res;
    }
};
