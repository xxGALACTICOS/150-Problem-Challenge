class MinStack {

    constructor() {
        this.minValue = 9999999;
        this.stack = [];
        this.topElement = -1;
    }

    /**
     * @param {number} val
     * @return {void}
     */
    push(val) {
        this.stack.push(val);
        return null;
    }
    calcMin(){
        this.minValue = Math.min(...this.stack);
        return this.minValue;
    }

    /**
     * @return {void}
     */
    pop() {
        if(this.stack.length >= 1){
            this.stack.pop();
        }
        return null;
    }

    /**
     * @return {number}
     */
    top() {
        if(this.stack.length >= 1){
            return this.stack[this.stack.length -1];
        }
        return null;
    }

    /**
     * @return {number}
     */
    getMin() {
        if(this.stack.length >= 1){
            return this.calcMin();
        }
        return null;
    }
}
