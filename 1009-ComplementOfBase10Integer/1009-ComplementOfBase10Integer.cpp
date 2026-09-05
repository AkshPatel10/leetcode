// Last updated: 05/09/2026, 10:13:04
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }

        int mask = 1;

        while(mask<n){
            mask = (mask << 1) | 1;
        }

        return n^mask;
    }
};