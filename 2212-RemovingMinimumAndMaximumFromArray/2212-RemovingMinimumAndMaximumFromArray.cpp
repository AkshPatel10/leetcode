// Last updated: 30/08/2026, 10:33:33
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minimum = 0;
        int maximum = 0;

        for(int i = 0;  i < n; i++){
            if(nums[i] < nums[minimum]){
                minimum = i;
            }
            if(nums[i] > nums[maximum]){
                maximum = i;
            }
        }

        int toFront = min(minimum, maximum);
        int toBack = max(minimum, maximum);

        int bothFront = toBack + 1;
        int bothBack = n - toFront;
        int oneEach = (toFront + 1) + (n - toBack);

        return min({bothFront, bothBack, oneEach});
    }
};