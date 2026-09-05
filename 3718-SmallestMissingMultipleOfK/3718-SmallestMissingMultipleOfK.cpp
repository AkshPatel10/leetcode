// Last updated: 05/09/2026, 10:06:41
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> ex;

        for(int x : nums){
            ex.insert(x);
        }

        int missing = k;
        
        while(ex.count(missing)){
            missing += k;
        }
        return missing;
    }
};