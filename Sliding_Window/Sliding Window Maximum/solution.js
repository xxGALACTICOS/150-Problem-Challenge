class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    maxSlidingWindow(nums, k) {
        if (k === 1) return nums;
        let maxNum = -1;
        let l = 0;
        const res = [];
        let window = [];
        let r = 0;
        let idxMax = -1;
        for (; r < k; r++) {
            window.push(nums[r]);
            if (nums[r] > maxNum) {
                maxNum = nums[r];
                idxMax = r;
            }
        }
        res.push(maxNum);

        for (; r < nums.length; r++) {
            window.push(nums[r]);
            window.shift();
            l++;

            console.log("Window" + window);
            if (nums[r] > maxNum) {
                maxNum = nums[r];
            } else {
                maxNum = Math.max(...window, nums[r]);
                // if (idxMax === l) {
                //     console.log("Current window   " + window);
                //     idxMax = nums.indexOf(maxNum);
                // }
            }

            res.push(maxNum);
        }
        return res;
    }
}
