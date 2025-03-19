class Solution {
    /**
     * @param {string[]} strs
     * @returns {string}
     */
    encode(strs) {
        var result = "";
        var fuckinCase = false;
        for(var i = 0;i<strs.length;i++){
            result += strs[i];
            fuckinCase = true;
            if(i !== strs.length-1){
                result += "-";  
            }
        }
        if(result === "" && fuckinCase)return "";
        else if(fuckinCase === false)return "fuckinCase";
        return result;
    }

    /**
     * @param {string} str
     * @returns {string[]}
     */
    decode(str) {
        if(str === "")return [""]
        if(str === "fuckinCase")return []
        return str.split('-')
    }
}
