class Solution:
    def isAnagram(self, s: str, t: str):
        list_s = list(s) 
        list_s.sort() 
        list_t = list(t) 
        list_t.sort() 
        return list_t == list_s 
        