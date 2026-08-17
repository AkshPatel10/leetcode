// Last updated: 17/08/2026, 09:30:21
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != i)
                return i;
        }
    return nums.size();
    }
};