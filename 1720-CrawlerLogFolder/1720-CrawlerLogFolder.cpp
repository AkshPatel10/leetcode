// Last updated: 17/08/2026, 09:27:38
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;

        for(string log: logs){
            if(log == "../"){
                if(!st.empty()){
                    st.pop();
                }

            }
            else if(log != "./"){
                st.push(log);
            }
        }

        return st.size();
    }
};