class TimeMap {
    constructor() {
        this.keyStore = new Map();
    }

    /**
     * @param {string} key
     * @param {string} value
     * @param {number} timestamp
     * @return {void}
     */
    set(key, value, timestamp) {
        if(!this.keyStore.has(key))
            this.keyStore.set(key,[]);
        this.keyStore.get(key).push([value,timestamp]);
    }

    get(key, timestamp) {
        if(!this.keyStore.has(key)){
            return "";
        }

        const entries = this.keyStore.get(key);

        let right = entries.length - 1;
        let left = 0;
        let res = "";
        while(left <= right){
            const mid = Math.floor((left+right)/2);
            if(entries[mid][1] <= timestamp){
                res = entries[mid][0];
                left = mid + 1;
            }
            else if(entries[mid][1] > timestamp)
                right = mid - 1;
        }
        return res;
    }
}
