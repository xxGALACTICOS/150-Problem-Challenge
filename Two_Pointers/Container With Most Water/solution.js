class Solution {
    /**
     * @param {number[]} heights
     * @return {number}
     */
    maxArea(heights) {

        var left = 0, right = heights.length-1;
        var maxA = 0;

        while(left < right){
            var height = Math.min(heights[left],heights[right]);
            var len =  Math.abs(right - left);

            maxA = Math.max(maxA , height*len);

            if(heights[right] >= heights[left]){
                left++;
            }
            else{
                right--;
            }
        }
        
        return maxA;
    }
}
