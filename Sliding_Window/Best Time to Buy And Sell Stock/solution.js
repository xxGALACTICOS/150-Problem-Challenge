class Solution {
    /**
     * @param {number[]} prices
     * @return {number}
     */
    maxProfit(prices) {
        let profit = 0;
        let si = prices.length;
        let minProduct = prices[0];
        for(let i = 1;i<si;i++){
            if(prices[i] < minProduct){
                minProduct = prices[i];
            }
            else{
                profit = Math.max(profit,prices[i]-minProduct);
            }
        }
        return profit;
    }
}
