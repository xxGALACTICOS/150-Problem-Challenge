#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& k) {
        sort(k.begin(), k.end());
    for (int i = 1; i < k.size(); i++) {
	if (k[i] == k[i-1]) {
		return true;
	}

}
return false;
    }
};
