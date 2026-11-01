// Last updated: 01/11/2026, 08:17:40
1class Solution {
2public:
3    long long minimumMaxValue(int n, int index, int value) {
4        if(value == 1)
5            return -1;
6
7        long long p = value;
8
9        for(long long d = 2; d*d <= value; d++){
10            if(value %d==0){
11                p=d;
12                break;
13            }
14        }
15
16        long long left = index;
17        long long right = n-1-index;
18
19        long long fit = (value - p)/2;
20        if(left>fit) return -1;
21
22        if(right ==0 ){
23            return value;
24        }
25
26        return value + p+2*(right-1);
27    }
28};