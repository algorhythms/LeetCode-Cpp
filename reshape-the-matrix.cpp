class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    vector<vector<int>> res(r, vector<int>(c, 0));
    int n = nums.size(), m = nums[0].size();
    int s = n * m;
    if (s != r * c) return nums;
    for (int i = 0; i < s; i++) res[i / c][i % c] = nums[i / m][i % m];
    return res;
  }
};