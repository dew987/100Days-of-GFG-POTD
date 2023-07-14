//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int **dp= new int*[n+1];
        for(int i= 0; i<=n; i++)
        {
            dp[i]= new int[n+1];
            for(int j= 0; j<n+1; j++)
            {
                dp[i][j]= -1;
            }
        }
        return fun(n, price, 0, dp);
        
        return fun(n, price, 0, dp);
        
    }
    int fun(int n, int price[], int ind, int **dp)
    {
        if(ind+1 > n)
            return 0;
            
        if(dp[ind+1][n]!= -1)  return dp[ind+1][n];
        return dp[ind+1][n]= max(fun(n, price, ind+1, dp), price[ind]+ fun(n-ind-1, price, ind, dp));
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends