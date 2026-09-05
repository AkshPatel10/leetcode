// Last updated: 05/09/2026, 10:13:00
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {

        unordered_map<int, int> freq;
        for (int x : barcodes) {
            freq[x]++;
        }

        vector<pair<int, int>> arr;
        for (auto x : freq) {
            arr.push_back({x.second, x.first});
        }

        sort(arr.rbegin(), arr.rend());
        vector<int> ans(barcodes.size());
        int index = 0;

        for (auto x : arr) {
            int count = x.first;
            int barcode = x.second;

            while (count--) {
                ans[index] = barcode;

                index += 2;

                if (index >= barcodes.size()) {
                    index = 1;
                }
            }
        }
        return ans;
    }
};