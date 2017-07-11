class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    std::vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i) v[i] = 0;
    for (int i = 0; i < n; ++i) v[nums[i]] = 1;
    vector<int> ans;
    ans.clear();
    for (int i = 1; i <= n; ++i) if (v[i] == 0) {
      ans.push_back(i);
    }
    return ans;
  }
};