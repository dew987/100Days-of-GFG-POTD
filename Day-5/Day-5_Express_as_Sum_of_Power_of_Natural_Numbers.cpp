//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++
# define mod 1000000007
class Solution{
    public:
    
    int includeExclude(vector<int> &vec, int i, int n, int size, int **dp)
    {
        if(n<0)
            return 0;
            
        if(i== size)
        {
            if(n== 0)
                return dp[i][n]= 1;
            else
                return dp[i][n]= 0;
        }
        if(dp[i][n]!= -1)
            return dp[i][n];
        
        return dp[i][n]=
            (includeExclude(vec, i+1, n, size, dp)%mod +
            includeExclude(vec, i+1, n-vec[i], size, dp)%mod)%mod;
        
    }
    int numOfWays(int n, int x)
    {
        // code here
        vector<int> squared;
        for(int i= 1; i<=n; i++)
        {
            int t= pow(i, x);
            if(t<=n)
                squared.push_back(t);
            else
                break;
        }
        
        int **dp= new int*[squared.size()+1];
        for(int i= 0; i<=squared.size(); i++)
        {
            dp[i]= new int[n+1];
            for(int j= 0; j<=n; j++)
                dp[i][j]= -1;
            
        }
        int sum= includeExclude(squared, 0, n, squared.size(), dp);
        return sum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends