// Last updated: 05/09/2026, 10:06:39
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> result;

        for(int i = mini; i <= maxi; i++){
            if(!s.count(i)){
                result.push_back(i);
            }
        }

        return result;
    }
};