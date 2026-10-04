// Last updated: 04/10/2026, 16:45:41
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[largest]){
                largest = i;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i != largest && nums[largest] < 2 * nums[i])
                return -1;
        }

        return largest;
    }
};