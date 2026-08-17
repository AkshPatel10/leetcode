// Last updated: 17/08/2026, 09:23:45
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++){
            int d = check(nums[i]);

            if(i == d){
                return i;
            }
            
        }
        return -1;
    }

    int check(int num){
        int sum = 0;
        while(num > 0){
            int digit = num %10;
            sum+=digit;
            num/=10;
        }
        return sum;
    }
};