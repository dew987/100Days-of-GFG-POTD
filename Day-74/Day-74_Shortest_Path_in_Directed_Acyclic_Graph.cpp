//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> topoSort(int N, int M, vector<vector<int>> &edges)
    {
        vector<int> topo;
        queue<int> q1;
        int visited[N]= {0};
        int indegree[N]= {0};
        for(int i= 0; i<M; i++)
        {
                indegree[edges[i][1]]++;
        }
        for(int i= 0; i<N; i++)
        {
            if(indegree[i]== 0)
            {
                q1.push(i);
            }
        }
        
        while(!q1.empty())
        {
            int node= q1.front();
            q1.pop();
            topo.push_back(node);
            visited[node]= 1;
            for(int i= 0; i<M; i++)
            {
                if(edges[i][0]== node)
                {
                    indegree[edges[i][1]]--;
                    if(indegree[edges[i][1]]== 0)
                    {
                        q1.push(edges[i][1]);
                    }
                }
                    
            }
        }
        return topo;
    }
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<int> topo= topoSort(N, M, edges);
        vector<int> dist(N, 1e8);
        dist[0]= 0;
        for(int i= 0; i<N; i++)
        {
            for(int j= 0; j<M; j++)
            {
                //topo[i]
                if(edges[j][0]== topo[i] && dist[edges[j][0]]+ edges[j][2]< dist[edges[j][1]])
                {
                    dist[edges[j][1]]= dist[edges[j][0]]+ edges[j][2];
                }
            }
        }
        for(int i= 0; i<N; i++)
        {
            if(dist[i]== 1e8)
            {
                dist[i]= -1;
            }
        }
        
        return dist;
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends