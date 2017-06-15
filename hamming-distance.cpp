class Solution {
public:
  int hammingDistance(int x, int y) {
    // x = x ^ y;
    // int s = 0;
    // while (x) {
    //   if (x & 1) ++s;
    //   x >>= 1;
    // }
    // return s;
    return __builtin_popcount(x ^ y);
  }
};