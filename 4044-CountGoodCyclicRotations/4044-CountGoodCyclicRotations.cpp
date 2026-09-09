// Last updated: 09/09/2026, 13:07:15
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int half = n/2;

        vector<long long> d(2*n);
        for(int i = 0; i < n; i++){
            d[i]=nums[i];
            d[i+n]=nums[i];
        }

        vector<long long> prefix(2*n+1,0);
        for(int i = 0; i < 2*n; i++){
            prefix[i+1]=prefix[i]+d[i];
        }

        int cnt = 0;
        for(int p = 0; p < n; p++){
            long long firstHalfSum = prefix[p+half] - prefix[p];
            long long secondHalfSum = prefix[p+n] - prefix[p+half];
            if(firstHalfSum > secondHalfSum){
                cnt++;
            }
        }
        return cnt;
    }
};