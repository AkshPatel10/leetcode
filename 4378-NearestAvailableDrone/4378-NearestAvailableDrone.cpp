// Last updated: 17/08/2026, 09:22:37
class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {

        long long minDist = LLONG_MAX;
        int ans = -1;
        
        for(int i = 0; i < drones.size(); i++){
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];

            long long int dist = abs((long long)x-target[0]) + abs((long long)y-target[1]);

            if(dist <= range && dist < minDist){
                minDist = dist;
                ans = i;
            }
        }
        return ans;
    }
};