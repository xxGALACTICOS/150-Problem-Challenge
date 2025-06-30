class Solution {
    findMedianSortedArrays(nums1, nums2) {
        let res = [];
        let s1 = nums1.length;
        let s2 = nums2.length;
        let i = 0, k = 0;

        while (i < s1 && k < s2) {
            if (nums1[i] <= nums2[k]) {
                res.push(nums1[i++]);
            } else {
                res.push(nums2[k++]);
            }
        }

        while (i < s1) res.push(nums1[i++]);
        while (k < s2) res.push(nums2[k++]);

        let s3 = res.length;
        if (s3 % 2 === 0) {
            let mid1 = res[Math.floor(s3 / 2) - 1];
            let mid2 = res[Math.floor(s3 / 2)];
            return (mid1 + mid2) / 2;
        } else {
            return res[Math.floor(s3 / 2)];
        }
    }
}
