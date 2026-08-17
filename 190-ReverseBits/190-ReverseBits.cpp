// Last updated: 17/08/2026, 09:30:49
class Solution {
public:
    int reverseBits(int n) {
        unsigned int num = n;     
        unsigned int result = 0;

        for(int i = 0; i < 32; i++) {
            result = (result << 1) | (num & 1);
            num >>= 1;
        }

        return result;
    }
};