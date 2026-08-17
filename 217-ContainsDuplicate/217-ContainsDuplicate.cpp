// Last updated: 17/08/2026, 09:30:38
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int num : nums){
            if(st.find(num) != st.end()){
                return true;
            }
            else{
                st.insert(num);
            }
        }
        return false;
    }
};