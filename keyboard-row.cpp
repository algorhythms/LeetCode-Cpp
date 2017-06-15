class Solution {
public:
  bool check(string& x) {
    static const string row[] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    int pos = 0;
    for (int i = 0; i < 3; i++) if (find(row[i].begin(), row[i].end(), tolower(x[0])) != row[i].end()) {
      pos = i;
      break;
    }
    for (int i = 0; i < x.size(); i++) {
      for (int j = 0; j < 3; j++) {
        if (find(row[j].begin(), row[j].end(), tolower(x[i])) != row[j].end()) {
          if (j != pos) return 0;
          break;
        }
      }
    }
    return 1;
  }
  vector<string> findWords(vector<string>& words) {
    vector<string> res;
    for (int i = 0; i < words.size(); i++) if (check(words[i])) {
      res.push_back(words[i]);
    }
    return res;
  }
};