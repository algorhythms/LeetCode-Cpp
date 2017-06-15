class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> M;
    for (int i = 0; i < nums.size(); i++) {
      if (M.find(target - nums[i]) != M.end()) {
        vector<int> res;
        res.push_back(M[target - nums[i]]);
        res.push_back(i);
        return res;
      }
      M[nums[i]] = i;
    }
  }
};

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (nums[i] + nums[j] == target) {
          vector<int> res;
          res.push_back(i);
          res.push_back(j);
          return res;
        }
      }
    }
  }
};