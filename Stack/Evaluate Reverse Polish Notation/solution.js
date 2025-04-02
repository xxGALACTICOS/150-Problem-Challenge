class Solution {
    /**
     * @param {string[]} tokens
     * @return {number}
     */
    evalRPN(tokens) {
        const ops = ['*' , '/' , '+' , '-'];
        const stack = [];
        var res = 0;

        for( var i = 0;i < tokens.length;i++){

            if(ops.indexOf(tokens[i]) == -1){
                stack.push(tokens[i]);
            }
            else{
                var res;
                for(var j = 0;j<1;j++){
                    var top = (stack.pop() - '0');
                    var beforeTop = (stack.pop()- '0');
                    
                    if(tokens[i] === '*'){
                        res = beforeTop * top;
                    }
                    else if(tokens[i] === '+'){
                        res = beforeTop + top;
                    }
                    else if(tokens[i] === '-'){
                        res  = beforeTop - top;
                    }
                    else if(tokens[i] === '/'){
                        res = Math.trunc(beforeTop / top);
                    }
                }
                stack.push(res);
            }
        }
        return stack[stack.length-1];
        
    }
}
