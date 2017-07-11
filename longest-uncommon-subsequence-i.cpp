class Solution {
public:
  int findLUSlength(string a, string b) {
    int al = a.size(), bl = b.size();
    if (a == b) return -1;
    return std::max(al, bl);
  }
};