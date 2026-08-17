// Last updated: 17/08/2026, 09:29:57
class Solution {
public:
    bool isPerfectSquare(int num) {

        for(long long i = 1; i <= num; i++){

            if(i * i == num)
                return true;

            if(i * i > num)
                return false;
        }

        return false;
    }
};