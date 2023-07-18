//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    bool checkForPattern(vector<vector<char>>& board, string word, int index, int i, int j, int n, int m)
    {
        if(index== word.length())
            return true;
            
        if(i<0 || j<0 || i>n-1 || j>m-1)
            return false;
        
        if(word[index]!= board[i][j])
        {
            return false;
        }
        board[i][j]= '*';
        return (checkForPattern(board, word, index+1, i, j-1, n, m) || checkForPattern(board, word, index+1, i-1, j, n, m) || checkForPattern(board, word, index+1, i, j+1, n, m) || checkForPattern(board, word, index+1, i+1, j, n, m));
        
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        
        int n= board.size();
        int m= board[0].size();
        
        for(int i= 0; i<n; i++)
        {
            for(int j= 0; j<m; j++)
            {
                if(board[i][j]== word[0] && checkForPattern(board, word, 0, i, j, n, m))
                    return true;
            }
        }
        
        return false;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends