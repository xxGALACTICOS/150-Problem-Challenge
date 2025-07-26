class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int* maxPrice = &prices[0];
		int* minPrice = &prices[0];
		int* it = &prices[0];
		int i = prices.size()-1;
		int res = 0;
		while (i--) {
			it++;
			if (*it > *maxPrice) {
				maxPrice = it;
				if (res > *maxPrice - *minPrice)continue;
				res = *maxPrice - *minPrice;
			}
			else if ((*it < *minPrice) && (it != &prices[prices.size() - 1])) {
				minPrice = it;
				maxPrice = it;
			}
		}

		return (res);
	}
};
