// https://discuss.leetcode.com/topic/4996/share-my-o-log-min-m-n-solution-with-explanation/2
class Solution {
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    if (n1 > n2) {
      swap(n1, n2); swap(nums1, nums2);
    }
    int mn = 0, mx = n1, md = n1 + n2 + 1 >> 1;
    int x, y;
    int rx, rn;
    while (mn <= mx) {
      x = mn + mx >> 1;
      y = md - x;
      if (x < n1 && nums2[y - 1] > nums1[x]) mn = x + 1;
      else if (x > 0 && nums1[x - 1] > nums2[y]) mx = x - 1;
      else {
        // x is perfect
        if (x == 0) rx = nums2[y - 1];
        else if (y == 0) rx = nums1[x - 1];
        else rx = max(nums1[x - 1], nums2[y - 1]);
        if ((n1 + n2) & 1) return rx;
        if (x == n1) rn = nums2[y];
        else if (y == n2) rn = nums1[x];
        else rn = min(nums1[x], nums2[y]);
        return (rx + rn) / 2.0;
      }
    }
  }
};

class Solution {
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // int n1 = nums1.size(), n2 = nums2.size();
    vector<int> ans;
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(ans));
    int n = ans.size();
    if (n & 1) return ans[n / 2];
    return (ans[n / 2] + ans[n / 2 - 1]) / 2.0;
  }
};