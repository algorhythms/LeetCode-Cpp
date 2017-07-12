class Solution {
public:
  int addDigits(int num) {
    return 1 + (num - 1) % 9;
    // if (num < 10) return num;
    // return addDigits(addDigits(num / 10) + num % 10);
  }
};