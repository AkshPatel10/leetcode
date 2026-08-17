// Last updated: 17/08/2026, 09:29:45
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int counter3 = 0; 
        int counter5 = 0;

        for(int i = 1; i <= n; i++){
            counter3++; 
            counter5++;
            if(counter3 == 3 && counter5 == 5){
                ans.push_back("FizzBuzz");
                counter3 = 0; 
                counter5 = 0; 
            }
            else if(counter3 == 3){
                ans.push_back("Fizz");
                counter3 = 0;
            }
            else if(counter5 == 5){
                ans.push_back("Buzz");
                counter5 = 0;
            }
            else{
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};
