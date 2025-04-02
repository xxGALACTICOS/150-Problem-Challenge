class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        map<int,queue<int>> indecies;
        stack<int>temps;
        vector<int>result(temperatures.size(),0);

        for(int i =0;i<temperatures.size();i++){
            indecies[temperatures[i]].push(i); ;
        }
        // push first element to start with index-1
        temps.push(temperatures[0]);
        for(int i = 1; i < temperatures.size();i++ ){
            int topElement = temps.top();
            while(temperatures[i] > topElement && temps.size()){
                temps.pop();
                result[indecies[topElement].front()] = i - indecies[topElement].front();
                indecies[topElement].pop();
                if(temps.size()){
                    topElement = temps.top();
                }
            }
            temps.push(temperatures[i]);
        }
        return result;

    }
};
