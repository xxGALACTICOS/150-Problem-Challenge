
class Solution {
  /**
   * @param {string[]} strs
   * @return {string[][]}
   */
  groupAnagrams(strs) {

    const result = {}
    for (var word of strs) {
      //   let totalAscii = 0;
      //   for (var ch of word) {
      //     totalAscii += ch.charCodeAt(0);
      //   }
      //   if (!result[totalAscii]) {
      //     result[totalAscii] = []
      //   }
      //   result[totalAscii].push(word);
      // }
      let s = word;
      s = s.split('').sort().join('');
      if (!result[s]) {
        result[s] = []
      }
      result[s].push(word);
    }
    const arr = Object.values(result);
    return arr;
  }
}
