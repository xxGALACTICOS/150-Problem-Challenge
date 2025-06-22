class Solution {
    /**
     * @param {number[][]} matrix
     * @param {number} target
     * @return {boolean}
     */
    searchMatrix(matrix, target) {
        // first binary search for the right row
        let right = matrix.length - 1;
        let left = 0;
        let mid = -1;
        let row = -1;
        while (left <= right) {
            mid = Math.floor((left + right) / 2);
            if (matrix[mid][0] == target) return true;
            else if (matrix[mid][0] > target) right = mid - 1;
            else if (matrix[mid][0] < target && target <= matrix[mid][matrix[0].length-1])
            {
                row = mid
                break;
            }
            else left = mid + 1;
        }
        // now we have mid which is the right row if we didn't find it
        right = matrix[0].length - 1;
        left = 0;
        if(row == -1) return false;

        while (left <= right) {
            mid = Math.floor((left + right)/2);
            if(matrix[row][mid] == target)return true;
            else if(matrix[row][mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return false;
    }
}
