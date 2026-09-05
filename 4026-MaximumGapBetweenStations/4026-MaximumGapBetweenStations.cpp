// Last updated: 05/09/2026, 10:06:50
class Solution {
public:
    int maximumGap(string skill, string station) {
        int n = skill.size();
        int m = station.size();

        if(n == 1)
            return 0;

        vector<int> earliest(n), latest(n);

        int pos = -1;
        for(int i = 0; i < n; i++){
            pos++;
            while (pos < m && station[pos] != skill[i]){
                pos++;
            }
            earliest[i] = pos;
        }
        pos = m-1;

        for(int i = n-1; i >= 0; i--){
            while(pos >= 0 && station[pos] != skill[i]){
                pos--;
            }
            latest[i] = pos;
            pos--;
        }

        int ans = 0;

        for(int i = 1; i < n; i++){
            int gap = latest[i] - earliest[i-1];

            if(gap>ans){
                ans = gap;
            }
        }
        return ans;
    }
};