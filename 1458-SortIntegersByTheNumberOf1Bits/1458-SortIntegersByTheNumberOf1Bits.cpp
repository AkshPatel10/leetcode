// Last updated: 17/08/2026, 09:28:19
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