class Solution {
public:
    bool isPalindrome(string s) {
       vector<char>f;
vector<char>k;
for (auto a : s) {
	if (a >= 'a' && a <= 'z'|| a >= 'A' && a <= 'Z') {
		f.push_back(tolower(a));
	}
	if (a >= '0' && a <= '9') {
		f.push_back(a);
	}
}
for (int i = f.size() - 1; i >= 0; i--) {
	k.push_back(f[i]);
}
for (int i = 0; i < f.size(); i++) {
	if (k[i] != f[i]) {
		return false;
	}
}
return true;
    }
};
