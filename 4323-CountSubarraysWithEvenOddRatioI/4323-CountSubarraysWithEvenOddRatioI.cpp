// Last updated: 17/08/2026, 09:22:36
class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int cnt = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int even = 0;
            int odd = 0;

            for(int j = i; j < n; j++){
                if(nums[j]%2==0){
                    even++;
                }
                else{
                    odd++;
                }

                if(odd > 0 && even * b <= odd * a){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};