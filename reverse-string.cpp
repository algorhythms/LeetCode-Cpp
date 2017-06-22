class Solution {
public:
  string reverseString(string s) {
    int n = s.size();
    string res = "";
    for (int i = n - 1; i >= 0; i--) {
      res.push_back(s[i]);
    }
    return res;
  }
};