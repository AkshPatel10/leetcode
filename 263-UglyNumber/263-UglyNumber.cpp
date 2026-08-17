// Last updated: 17/08/2026, 09:30:23
class Solution {
 public:
  bool isUgly(int n) {
    if (n == 0)
      return false;

    for (const int prime : {2, 3, 5})
      while (n % prime == 0)
        n /= prime;

    return n == 1;
  }
};