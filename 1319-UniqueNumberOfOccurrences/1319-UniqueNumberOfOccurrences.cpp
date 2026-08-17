// Last updated: 17/08/2026, 09:28:36
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        unordered_set<int> seen;

        for (int x : arr)
            freq[x]++;

        for (const auto& p : freq) {
            if (seen.count(p.second))
                return false;

            seen.insert(p.second);
        }
        return true;
    }
};