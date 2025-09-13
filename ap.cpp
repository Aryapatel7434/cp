class Solution {
  public:
    bool checkCycleDFS(int node,unordered_map<int,bool>&visited, unordered_map<int,bool>&dfsvisited,
             unordered_map<int,list<int>>&adj)
             {
                 visited[node]=true;
                 dfsvisited[node]=true;
                 for(auto neighbour:adj[node]){
                     if(!visited[neighbour]){
                     bool cycledetected=checkCycleDFS(checkCycleDFS,visited,dfsvisited,adj);
                      if(cycledetected) return true;
                 }
                 else if(dfsvisited[neighbour]){
                     return true;
                 }
                }
                dfsvisited[node]=false;
             }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        //creat adj list
        unorderds_map<int,list<int>>adj;
        for(int i=0;i<edges.size();i++){
            int u=edges[i].first;
            int v=edges[i].second;
            //directed
            adj[u].push_back(v);
        }
        unordered_map<int,bool>visited;
        unordered_map<int,bool>dfsvisited;
        for(int i=1;i<=V;i++){
            if(!visited[i]){
                bool cyclefound=checkCycleDFS(i,visited,dfsvisited,adj);
                if(cyclefound) return true;
            }
        }
        return false;
    }
};