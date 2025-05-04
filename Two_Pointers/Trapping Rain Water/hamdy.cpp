class Solution {
public:
    int trap(vector<int>& height) {
        int* left = &height[0];
        int* right = &height.data()[0] + height.size() - 1;

        int Lmax = 0, Rmax = 0, res = 0;

        while (left < right) {
            if (*left < *right) {
                if (*left >= Lmax)
                    Lmax = *left;
                else
                    res += Lmax - *left;
                left++;
            }
            else {
                if (*right >= Rmax)
                    Rmax = *right;
                else
                    res += Rmax - *right;
                right--;
            }
        }

        return res;
    }
};
