// Last updated: 05/09/2026, 10:07:29
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