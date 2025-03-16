class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {

        const freq = {}
        for (var num of nums) {
            freq[num] = (freq[num] || 0) + 1;
        }

        const freqArray = Object.entries(freq);

        freqArray.sort((a, b) => a[1] - b[1]);

        const result = []
        for (var i = 0; i < k; i++) {
            result.push(freqArray.pop()[0])
        }
        return result;

    }
}
