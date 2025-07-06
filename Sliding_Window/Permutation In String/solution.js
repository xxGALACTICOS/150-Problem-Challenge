class Solution {
    /**
     * @param {string} s1
     * @param {string} s2
     * @return {boolean}
     */
    // sliding window technique
    // left whish is represent the start point of window
    // right which is check or it's the condition point 
    // window array or freq
    // you must have these 3 terms in ur solution
    checkInclusion(s1, s2) {
        if(s1.length > s2.length) return false;

        let l = 0;
        let window = {}

        let seen = {}
        for(let char of s1){
            seen[char] = (seen[char] || 0) + 1;
        }

        for (let r = 0; r < s2.length; r++) {
            let char = s2[r];

            if(seen[char]){
                window[char] = (window[char] || 0) + 1;
                if(window[char] > seen[char]){
                    while(true){
                        if(char === s2[l]){
                            l++
                            break;
                        }
                        window[s2[l]] = undefined;
                        l++;
                    }
                }
            }
            else{
                window = {}
                l = r + 1;
            }
            let res = Object.keys(window);
            console.log(res.length)
            if(res.length === s1.length) return true
        }
        return false;
    }
}

