// Last updated: 25/08/2026, 19:44:27
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> greater;
5
6        for(int i = 0; i < nums2.size(); i++){
7            int next = -1;
8
9            for(int j = i+1; j < nums2.size(); j++){
10                if (nums2[j] > nums2[i]) {
11                    next = nums2[j];
12                    break;
13                }
14            }
15            greater.push_back(next);
16        }
17
18        vector<int> answer;
19
20        for(auto x : nums1){
21            for(int i = 0; i < nums2.size(); i++){
22                if(nums2[i] == x){
23                    answer.push_back(greater[i]);
24                    break;
25                }
26            }
27        }
28        return answer;
29    }
30};