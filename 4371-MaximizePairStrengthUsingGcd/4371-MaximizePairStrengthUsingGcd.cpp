// Last updated: 17/08/2026, 09:22:34
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
       long long maxStrength = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                long long a = nums[i];
                long long b = nums[j];

                long long g = gcd(a,b);

                long long strength = (a*b)/(g*g);

                if(strength > maxStrength){
                    maxStrength = strength;
                }
            }
        }
        return maxStrength;
    }
};