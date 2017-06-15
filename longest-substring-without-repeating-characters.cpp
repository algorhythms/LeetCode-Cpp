class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int n = s.size(), ans = 0;
    map<char, int> M;
    int ll = 0;
    for (int rr = 0; rr < n; rr++) {
      if (M.find(s[rr]) != M.end()) ll = max(M[s[rr]], ll);
      ans = max(ans, rr - ll + 1);
      M[s[rr]] = rr + 1;
    }
    return ans;
  }
};

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int c[260];
    int ll = 0, rr = 0, n = s.size(), ok = 1;
    int res = 0;
    memset(c, 0, sizeof c);
    for (;;) {
      while (rr < n && ok) {
        if (c[ s[rr++] ]++) {
          ok = 0;
          break;
        }
      }
      if (ok) break;
      if (res < rr - 1 - ll) res = rr - 1 - ll;
      if (--c[ s[ll++] ] == 1) ok = 1;
    }
    if (n - ll > res) res = n - ll;
    return res;
  }
};