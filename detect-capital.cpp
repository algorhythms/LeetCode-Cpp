class Solution {
public:
  bool detectCapitalUse(string word) {
    int cnt = 0, n = word.size();
    for (int i = 0; i < n; ++i) {
      if (word[i] <= 'Z') ++cnt;
    }
    if (cnt == 0 || cnt == n || (cnt == 1 && word[0] <= 'Z')) return 1;
    return 0;
  }
};