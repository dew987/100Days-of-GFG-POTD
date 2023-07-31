//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n= str.length();
		    int **table = new int*[n+1];
		    for(int i= 0; i<=n; i++)
		    {
		        table[i]= new int[n+1];
		        for(int j= 0; j<=n; j++)
		        {
		            table[i][j]= 0;
		        }
		    }
		    for(int i= 1; i<=n; i++)
		    {
		        for(int j= 1; j<=n; j++)
		        {
		            if(str[i-1]== str[j-1] && i!=j)
		            {
		                table[i][j]= table[i-1][j-1]+1;
		            }
		            else 
		            {
		                table[i][j]= max(table[i-1][j], table[i][j-1]);
		            }
		        }
		    }
		    return table[n][n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends