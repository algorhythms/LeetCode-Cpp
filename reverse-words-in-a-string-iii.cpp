class Solution {
public:
  string reverseWords(string s) {
    s += ' ';
    int n = s.size();
    string res = "";
    vector<char> c;
    for (int i = 0; i < n; i++) {
      if (s[i] == ' ') {
        for (int j = int(c.size()) - 1; j >= 0; j--) {
          res += c[j];
        }
        c.clear();
        if (i + 1 != n) res += ' ';
      } else c.push_back(s[i]);
    }
    return res;
  }
};