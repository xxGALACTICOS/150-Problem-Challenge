class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {
        const patterns = {
            '(': ')',
            '{': '}',
            '[': ']',
        }

        const stack = [];

        for(var char of s){
            if(patterns[char]){
                stack.push(char);
            }
            else{
                let lastChar = stack[stack.length-1];
                if(patterns[lastChar] === char){
                    stack.pop();
                }
                else{
                    stack.push(char);
                }
            }
        }
        if(stack.length === 0){
            return true;
        }
        else{
            return false;
        }
    }
}
