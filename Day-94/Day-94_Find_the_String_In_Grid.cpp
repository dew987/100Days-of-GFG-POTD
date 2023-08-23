//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool wordInDirection(vector<vector<char>> &grid, string &word, int i, int j, int index, int xinc, int yinc)
    {
        if(index== word.length())
            return true;
        if(i<0 || i>=grid.size() || j<0  || j>=grid[0].size())
            return false;
        
        if(grid[i][j]== word[index])
        {
            return wordInDirection(grid, word, i+xinc, j+yinc, index+1, xinc, yinc);
        }
        else
        {
            return false;
        }
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    vector<vector<int>> ans;
	    int n= grid.size();
	    int m= grid[0].size();
	    
	    if(n<word.length() || m<word.length())
	        return ans;
	    
	    for(int i= 0; i<n; i++)
	    {
	        for(int j= 0; j<m; j++)
	        {
	            bool l= wordInDirection(grid, word, i, j, 0, 0, -1);
	            bool upl= wordInDirection(grid, word, i, j, 0, -1, -1);
	            bool up= wordInDirection(grid, word, i, j, 0, -1, 0);
	            bool upr= wordInDirection(grid, word, i, j, 0, -1, 1);
	            bool r= wordInDirection(grid, word, i, j, 0, 0, 1);
	            bool downr= wordInDirection(grid, word, i, j, 0, 1, 1);
	            bool down= wordInDirection(grid, word, i, j, 0, 1, 0);
	            bool downl= wordInDirection(grid, word, i, j, 0, 1, -1);
	            
	            if(l || upl || up || upr || r || downr || down || downl)
	                ans.push_back({i, j});
	        }
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends