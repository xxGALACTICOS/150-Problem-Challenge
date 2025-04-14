class Solution {
public:
    int maxArea(vector<int>& heights) {
        int* left = &(*heights.begin());
        int lIndex = 0;
        int* right = &(heights[heights.size()-1]);
        int rIndex = heights.size() - 1;
        int max = -1;
        int min;
        while (true) {
            bool rBig = false;
            bool lBig = false;
            if (*left >= *right)
            {
                min = *right;
                lBig = true;
            }
            else
            {
                min = *left;
                rBig = true;
            }
            int temp = min * (rIndex - lIndex);
            if (temp > max)
                max = temp;
            if (rBig) {
                left++;
                lIndex++;
            }
            else
            {
                right--;
                rIndex--;
            }
            if (left == right)
                break;
        }
        return max;
    }
};
