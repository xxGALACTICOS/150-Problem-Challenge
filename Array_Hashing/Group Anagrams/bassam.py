from collections import defaultdict
from typing import List
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        map = defaultdict(list)
        for x in strs :
            m = ''.join(sorted(x))
            map[m].append(x)
        return list(map.values())
