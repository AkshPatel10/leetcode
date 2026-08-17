// Last updated: 17/08/2026, 09:31:33
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0;
        int low = 0;
        int high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            } else if (nums[mid] == 1) {
                mid++;
            }

            else if (nums[mid] == 2) {
                swap(nums[high], nums[mid]); 
                high--;
            }
        }
    }
};