// Last updated: 05/09/2026, 10:10:40
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();

        int result = INT_MAX;

        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                result = min(result, abs(start - i));
            }
        }
        return result;
    }
};