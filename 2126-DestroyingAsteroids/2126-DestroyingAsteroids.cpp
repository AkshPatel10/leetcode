// Last updated: 05/09/2026, 10:09:53
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(begin(asteroids), end(asteroids));

        for(int &m : asteroids){
            if(mass < m){
                return false;
            }
            else if(mass >= 1e5){
                return true;
            }

            mass += m;
        }
        return true;
    }
};