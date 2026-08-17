// Last updated: 17/08/2026, 09:32:22
class Solution {
public:
    int findpivot(vector<int>& nums, int n){
        int l = 0, r = n-1;

        while(l < r){
            int mid = l + (r -l)/2;

            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r = mid;
            }
        }
        return r;
    }

    int binarysrch(int l, int r, vector<int>& nums, int target){
        int idx = -1;

        while(l <= r){
            int mid = l + (r - l)/2;

            if(nums[mid] == target){
                idx = mid;
                break;
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return idx;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot_idx = findpivot(nums, n);

        int idx = binarysrch(0, pivot_idx-1, nums, target);

        if(idx != -1){
            return idx;
        }

        idx = binarysrch(pivot_idx, n-1, nums, target);

        return idx;
    }
};