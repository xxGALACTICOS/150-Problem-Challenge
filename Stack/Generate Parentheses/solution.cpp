class Solution {
public:
int countClosed(string word) {
  int closed = 0;
  for (auto ch : word) {
    if (ch == ')') {
      closed++;
    }
  }
  return closed;
}
int countOpen(string word) {
  int opend = 0;
  for (auto ch : word) {
    if (ch == '(') {
      opend++;
    }
  }
  return opend;
}
vector<string> words;
vector<string> buildPar(int n, string word) {
  int opened = countOpen(word);
  int closed = countClosed(word);
  if (closed == n) {
    words.push_back(word);
  }
  string close = word + ')';
  string open = word + '(';

  if (closed < opened) {
    buildPar(n, close);
    if (opened < n)
      buildPar(n, open);
  }
  if (closed == opened && opened < n) {
     buildPar(n, open); 
  }
  return words;
}

    vector<string> generateParenthesis(int n) {
          vector<string> result = buildPar(n, "(");
         return result;

    }
};
