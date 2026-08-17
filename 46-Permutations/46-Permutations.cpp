// Last updated: 17/08/2026, 09:32:12
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;

        backtrack(result, temp, nums);

        return result;
    }

    void backtrack(vector<vector<int>>& result, vector<int>& temp, vector<int>& nums) {

        if(temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }

        for(int num : nums) {

            if(find(temp.begin(), temp.end(), num) != temp.end())
                continue;

            temp.push_back(num);

            backtrack(result, temp, nums);

            temp.pop_back();
        }
    }
};