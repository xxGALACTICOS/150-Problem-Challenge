class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        let startPoint = 0;
        let seen = {};
        let res = 0;

        for (let r = 0; r < s.length; r++) {
            if(seen[r] != undefined && seen[r] >= startPoint){
                startPoint = seen[r] +1;
            }
            seen[s[r]] = r;
            res = Math.max(res,r-l+1);
        }
        return res;
    }
};

class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        console.log(s.length);
        let startPoint = 0;
        let longest = "";
        let seen = [];
        let found = false;
        let subString = "";

        for (let i = 0; i < s.length; i++) {
            if (seen[s[i]] && seen[s[i]].idx >= startPoint) {
                console.log("Start  point is " + s[startPoint]);
                found = true;
                subString = s.substring(startPoint, i);
                console.log(subString);
                if (subString.length > longest.length) {
                    longest = subString;
                }
                startPoint = seen[s[i]].idx + 1;
                seen[s[i]].idx = i;
            }
            seen[s[i]] = { idx: i, char: s[i] };
            found = false;
        }
        if (!found) {
            subString = s.substring(startPoint, s.length);
        }
        if (subString.length > longest.length) {
            longest = subString;
        }

        return longest.length;
    }
}

