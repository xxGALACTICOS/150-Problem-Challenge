class Solution {
    /**
     * @param {number[]} piles
     * @param {number} h
     * @return {number}
     */
    validate(piles,mid,h){
        let banans = 0;
        for (let index = 0; index < piles.length; index++) {
             banans += Math.ceil(piles[index]/mid);
        }
        return banans;
    }
    minEatingSpeed(piles, h) {

        let max = -1;
        for (let index = 0; index < piles.length; index++) {
            if(piles[index] > max) max = piles[index];
        }
        let right = max;
        let left = 1;

        let res = -1;
        while(left <= right){
            const mid = Math.floor((left + right )/2);
            const banans = this.validate(piles,mid,h);
            if(banans <= h){
                res = mid;
                right = mid -1;
            }
            else if(banans > h) left = mid +1;
        }
        return res;
    }
}
