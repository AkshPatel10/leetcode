// Last updated: 09/09/2026, 13:07:19
class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        if(n == 1){
            return (k==0)?1:0;
        }

        string t = s + s;

        int m = t.size()-1;

        vector<int> prefix(m+1,0);

        for(int i = 0; i < m; i++){
            prefix[i+1] = prefix[i] + (t[i]==t[i+1]?1:0);
        }
        int ans = 0;

        for(int p = 0; p<n; p++){
            int l = p, r = p+n-2;
            int sum = prefix[r+1]-prefix[l];
            if(sum==k){
                ans++;
            }
        }
        return ans;
    }
};