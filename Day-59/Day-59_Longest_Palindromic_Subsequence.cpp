//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        int n= A.length();
        int **table= new int*[n+1];
        for(int i= 0; i<=n; i++)
        {
            table[i]= new int[n+1];
        }
        
        for(int i= 0; i<=n; i++)
        {
            for(int j= 0; j<=n; j++)
            {
                if(i== 0 || j== 0)
                {
                    table[i][j]= 0;
                }
                else if(A[i-1]== A[n-1-(j-1)])
                {
                    table[i][j]= 1+ table[i-1][j-1];
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

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}

// } Driver Code Ends