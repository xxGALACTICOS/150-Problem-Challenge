class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s) {
        let cleanStr = s.replace(/[^a-zA-Z0-9]/g, "");
        var right = cleanStr.length-1,left = 0;
        while(right > left){
            if(cleanStr[left].toLowerCase() !== cleanStr[right].toLowerCase())return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
}
