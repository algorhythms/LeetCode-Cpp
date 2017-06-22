class Solution {
public:
  int sta[2333], top = 0;
  unordered_map<int, int> m;
  vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
      while (top && sta[top - 1] < nums[i]) {
        m[sta[top - 1]] = nums[i];
        --top;
      }
      sta[top++] = nums[i];
    }
    vector<int> ans;
    for (int i = 0; i < findNums.size(); i++) ans.push_back(m.count(findNums[i])?m[findNums[i]]:0);
    return ans;
  }
};