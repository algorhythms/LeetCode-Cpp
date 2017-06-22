class Solution {
public:
  int met[200033], n = 0, c = 0;
  int distributeCandies(vector<int>& candies) {
    n = c = candies.size();
    // memset(met, 0, sizeof met);
    for (int i = 0; i < n; i++) {
      if (met[candies[i] + 100000]++) --c;
    }
    if (c < n / 2) return c;
    return n / 2;
  }
};