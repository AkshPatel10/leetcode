// Last updated: 05/09/2026, 10:10:58
class Solution {
    public int minOperations(String s) {
        int pattern1 = 0; 
        int pattern2 = 0; 

        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);

            if(i % 2 == 0){
                if(c != '0') pattern1++;
                if(c != '1') pattern2++;
            } else {
                if(c != '1') pattern1++;
                if(c != '0') pattern2++;
            }
        }

        return Math.min(pattern1, pattern2);
    }
}