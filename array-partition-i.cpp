class Solution {
public:
  int arrayPairSum(vector<int>& nums) {
    int n = nums.size(), res = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i += 2) {
      res += min(nums[i], nums[i + 1]);
    }
    return res;
  }
};