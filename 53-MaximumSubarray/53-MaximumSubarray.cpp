// Last updated: 17/08/2026, 09:32:06
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxi = nums[0];
        for(int i = 0; i < n; i++){
            sum += nums[i];
            maxi = max(sum, maxi);

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};