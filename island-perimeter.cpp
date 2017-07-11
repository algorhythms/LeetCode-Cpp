class Solution {
public:
  int islandPerimeter(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) if (grid[i][j]) {
        if (!i) ++ans;
        else if (grid[i - 1][j] == 0) ++ans;
        if (!j) ++ans;
        else if (grid[i][j - 1] == 0) ++ans;
        if (i + 1 == n) ++ans;
        else if (grid[i + 1][j] == 0) ++ans;
        if (j + 1 == m) ++ans;
        else if (grid[i][j + 1] == 0) ++ans;
      }
    }
    return ans;
  }
};