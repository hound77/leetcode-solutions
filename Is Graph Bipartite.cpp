class Solution {
public:
    
    bool dfscol(int s, int color, vector<vector<int>>& graph, vector<int>& col){
        for(auto v : graph[s])
        {
            if(col[v]==-1)
            {
                col[v]=1-color;
                if(dfscol(v,1-color,graph,col)==false)
                    return false;
            }
            else if(col[v]==color)
                return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>col(graph.size(),-1);
        for(int i=0;i<graph.size();i++)
        {
            if(col[i]==-1)
            {
                col[i]=0;
                if(dfscol(i,0,graph,col)==false)
                    return false;
            }
        }
        return true;
    }
};
