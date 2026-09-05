// Last updated: 05/09/2026, 10:12:45
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