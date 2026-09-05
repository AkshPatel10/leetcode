// Last updated: 05/09/2026, 10:10:17
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        int rightSum = 0;
        int leftSum = 0;

        for(int num : nums){
            sum += num;
        }

        for(int i = 0; i < nums.size(); i++){
            rightSum = sum - leftSum - nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};