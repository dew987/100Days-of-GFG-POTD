//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    bool isValid(int i, int j, int n, int m)
    {
        if(i>= 0 && i<n && j>=0 && j<m)
            return true;
        return false;
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int ans= 0;
        int n= matrix.size();
        int m= matrix[0].size();
        for(int i= 0; i<n; i++)
        {
            for(int j= 0; j<m; j++)
            {
                if(matrix[i][j]== 0)
                    continue;
                int cnt0= 0;
                //left
                if(isValid(i, j-1, n, m) && matrix[i][j-1]== 0)
                    cnt0++;
                    
                //up left diagonal
                if(isValid(i-1, j-1, n, m) && matrix[i-1][j-1]== 0)
                    cnt0++;
                    
                //up
                if(isValid(i-1, j, n, m) && matrix[i-1][j]== 0)
                    cnt0++;
                
                //up right diagonal
                if(isValid(i-1, j+1, n, m) && matrix[i-1][j+1]== 0)
                    cnt0++;
                    
                //right
                if(isValid(i, j+1, n, m) && matrix[i][j+1]== 0)
                    cnt0++;
                
                //down right diagonal
                if(isValid(i+1, j+1, n, m) && matrix[i+1][j+1]== 0)
                    cnt0++;
                
                //down
                if(isValid(i+1, j, n, m) && matrix[i+1][j]== 0)
                    cnt0++;
                    
                //down left diagonal
                if(isValid(i+1, j-1, n, m) && matrix[i+1][j-1]== 0)
                    cnt0++;
                
                if(cnt0>0 && (cnt0&1)== 0)
                    ans++;
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
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends