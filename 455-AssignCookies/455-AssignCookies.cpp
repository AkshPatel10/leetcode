// Last updated: 17/08/2026, 09:29:40
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; //points to child
        int j = 0; //points to cookie
        int count = 0;

        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){
                i++;
                j++;
                count++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};