class Solution {
public:
  string get(int n) {
    if (n % 3 == 0 && n % 5 == 0) return "FizzBuzz";
    else if (n % 3 == 0) return "Fizz";
    else if (n % 5 == 0) return "Buzz";
    return to_string(n);
  }
  vector<string> fizzBuzz(int n) {
    vector<string> s;
    for (int i = 1; i <= n; i++) s.push_back(get(i));
    return s;
  }
};