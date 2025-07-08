class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {string}
     */
    minWindow(s, t) {
        if (t.length > s.length) return "";
        const seen = {};
        let window = {};
        let res = [];
        let minArr = [];
        minArr.length = 100000000;
        let target = t.length;
        let counter = 0;

        for (let index = 0; index < t.length; index++) {
            const char = t[index];
            seen[char] = (seen[char] || 0) + 1;
        }

        for (let r = 0; r < s.length; r++) {
            const char = s[r];
            if (seen[char]) {
                window[char] = (window[char] || 0) + 1;
                res.push(char);
                counter++;
                console.log("Counter " + counter);
                if (window[char] <= seen[char]) {
                    target--;
                }
                if (target === 0) {
                    minArr = res.length < minArr.length ? [...res] : minArr;

                    console.log("Before while" + res);
                    while (counter !== (t.length - 1)) {
                        if (seen[res[0]]) {
                            if(this.complete(res,t))
                            minArr = res.length < minArr.length
                                ? [...res]
                                : minArr;
                            counter--;

                            console.log("res after deletion   " + res);
                        }
                        window[res.shift()] = undefined;
                    }
                    target = 1;
                }
            } else if (!seen[char] && res.length) {
                res.push(char);
            }
        }
        return minArr.join("");
    }
    complete(res,t){
        for(let char of t){
            if(!res.includes(char)) return false;
        }
        return true;
    }
}
