// Last updated: 17/08/2026, 09:30:17
bool isBadVersion(int version);

class Solution {
 public:
  int firstBadVersion(int n) {
    int l = 1;
    int r = n;

    while (l < r) {
      const int m = l + (r - l) / 2;
      if (isBadVersion(m))
        r = m;
      else
        l = m + 1;
    }

    return l;
  }
};