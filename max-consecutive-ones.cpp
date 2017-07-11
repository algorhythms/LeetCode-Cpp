class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int cur = 0;
    int ans = 0;
    nums.push_back(0);
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 1) ++cur;
      else {
        if (ans < cur) ans = cur;
        cur = 0;
      }
    }
    return ans;
  }
};