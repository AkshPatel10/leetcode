// Last updated: 17/08/2026, 09:23:38
class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n);
        rank.resize(n,0);
        for(int i=0;i<n;i++) parent[i]=i;
    }

    int find(int x){
        if(parent[x]!=x)
            parent[x]=find(parent[x]);
        return parent[x];
    }

    bool unite(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b) return false;

        if(rank[a]<rank[b]) swap(a,b);
        parent[b]=a;
        if(rank[a]==rank[b]) rank[a]++;

        return true;
    }
};

class Solution {
public:

  bool can(int n, vector<vector<int>>& edges, int k, int X) {
    
    DSU dsu(n);
    int used = 0;

    vector<vector<int>> good;
    vector<vector<int>> upgrade;

    for(auto &e : edges){
        int u=e[0], v=e[1], s=e[2], must=e[3];

        if(must){
            if(s < X) return false;
            if(!dsu.unite(u,v)) return false;
            used++;
        }
        else{
            if(s >= X) good.push_back(e);
            else if(2*s >= X) upgrade.push_back(e);
        }
    }

    // use edges that already satisfy strength
    for(auto &e: good){
        if(used == n-1) break;
        if(dsu.unite(e[0], e[1])) used++;
    }

    // use upgrades if needed
    int upgrades = 0;
    for(auto &e: upgrade){
        if(used == n-1) break;
        if(upgrades >= k) break;

        if(dsu.unite(e[0], e[1])){
            upgrades++;
            used++;
        }
    }

    return used == n-1;
}

    int maxStability(int n, vector<vector<int>>& edges, int k) {

        int lo=0, hi=2e5, ans=-1;

        while(lo<=hi){
            int mid=(lo+hi)/2;

            if(can(n,edges,k,mid)){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }

        return ans;
    }
};