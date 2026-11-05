// Last updated: 05/11/2026, 10:31:22
1class Solution {
2public:
3    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
4        int n = arr1.size();
5        int m = arr2.size();
6        int count = 0;
7
8        for(int i = 0; i < n; i++){
9            bool valid = true;
10
11            for(int j = 0; j < m; j++){
12                if(abs(arr1[i] - arr2[j]) <= d){
13                    valid = false;
14                    break;
15                }
16            }
17            if(valid){
18                count++;
19            }
20        }
21        return count;
22    }
23};