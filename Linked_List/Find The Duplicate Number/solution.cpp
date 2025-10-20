class Solution {
public:
  int findDuplicate(vector<int> &nums) {
    map<int, int> visited;

    for (int &num : nums) {
      visited[num]++;
      if (visited[num] > 1){
        return num;
      }
    }
    return 0;
  }
};
