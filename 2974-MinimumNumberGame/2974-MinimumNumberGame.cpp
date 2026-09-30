// Last updated: 30/09/2026, 11:40:04
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector <int>result;
6
7        for(int i = 0; i < nums.size(); i+=2){
8            result.push_back(nums[i+1]);
9            result.push_back(nums[i]);
10        }
11        return result;
12    }
13};