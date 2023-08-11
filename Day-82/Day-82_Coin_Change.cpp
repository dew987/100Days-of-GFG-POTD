//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int n, int sum) {

        // code here.
        vector<vector<long long>> dp(n, vector<long long> (sum+1, 0));
        for(int i= 0;i<n; i++)
        {
            dp[i][0]= 1;
        }
        
        for(int i= 0; i<n; i++)
        {
            for(int j= 1; j<sum+1; j++)
            {
                long long include, notinclude;
                include= notinclude= 0;
                
                if(j>= coins[i])
                    include= dp[i][j - coins[i]];
                    
                if(i> 0)
                    notinclude= dp[i-1][j];
                    
                dp[i][j]= include+notinclude;
            }
        }
        
        return dp[n-1][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends