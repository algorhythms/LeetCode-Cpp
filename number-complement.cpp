class Solution {
public:
  int findComplement(int num) {
    if (num == 1) return 0;
    if (num == 0) return 1;
    if (num & 1) return findComplement(num >> 1) * 2;
    return findComplement(num >> 1) << 1|1;
  }
};