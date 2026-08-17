// Last updated: 17/08/2026, 09:31:16
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            ans = ans ^ val;
        }
        return ans;
    }
};