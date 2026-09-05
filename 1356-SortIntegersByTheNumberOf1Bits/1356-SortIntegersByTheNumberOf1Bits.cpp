// Last updated: 05/09/2026, 10:12:27
class Solution {
public:

static bool compare(int a, int b){
    int bit_cnt1 = __builtin_popcount(a);
    int bit_cnt2 = __builtin_popcount(b);

    if(bit_cnt1 == bit_cnt2){
        return a < b;
    }

    return bit_cnt1 < bit_cnt2;

}
    vector<int> sortByBits(vector<int>& arr) {
        //___builtin_popcount
        sort(arr.begin(), arr.end(), compare);

        return arr;
    }
};