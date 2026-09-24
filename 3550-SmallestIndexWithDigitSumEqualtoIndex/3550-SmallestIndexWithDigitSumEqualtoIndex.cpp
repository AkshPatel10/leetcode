// Last updated: 24/09/2026, 21:45:48
1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4
5        for(int index = 0; index < nums.size(); index++){
6
7            int digitSum = getDigitSum(nums[index]);
8
9            if(digitSum == index){
10                return index;
11            }
12        }
13
14        return -1;
15    }
16
17private:
18    int getDigitSum(int number){
19
20        int digitSum = 0;
21
22        while(number > 0){
23            digitSum += number % 10;
24            number /= 10;
25        }
26
27        return digitSum;
28    }
29};