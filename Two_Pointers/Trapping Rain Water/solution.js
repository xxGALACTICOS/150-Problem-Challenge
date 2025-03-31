class Solution {
    /**
     * @param {number[]} height
     * @return {number}
     */
    trap(height) {

        var l = 0 , r = height.length -1;
        var res = 0;
        var [maxLeft,maxRight] = [height[l],height[r]];

        while(l < r){
            if (maxLeft < maxRight){
                l++;
                maxLeft = Math.max(maxLeft , height[l]);

                res += maxLeft - height[l];
            }
            else{
                r--;
                maxRight = Math.max(maxRight,height[r]);

                res += maxRight - height[r];
            }
        }
        return res;

    }
}
