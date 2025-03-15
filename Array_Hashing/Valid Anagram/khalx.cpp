#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
	
	vector<char> g;
	vector<char> l;
	for (int i = 0; i < s.length(); i++)
	{
		g.push_back(s[i]);

	}
	sort(g.begin(), g.end());

	for (int i = 0; i < t.length(); i++)
	{
		
		l.push_back(t[i]);

	}
	sort(l.begin(), l.end());

	if (l.size() == g.size()) {
		for (int i = 0; i < g.size(); i++) {
			
			
			if (g[i] == l[i]) {
					
				g[i] = 0;
				l[i] = 0;
				continue;
				
			}

		}
		for (int i = 0; i < g.size(); i++) {
			if (g[i] != l[i]) {
				return false;
			}
		}
		return true;

	}
	
	return false;



}