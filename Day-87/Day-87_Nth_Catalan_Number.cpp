//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n)
    {
        int mod= 1e9+7;
        
        // using catalan number vector whenever required to find previously calculated value of smaller catalan
        vector<long long int> catalan(n+1, 0);
    
        // base case i.e. catalan of 0 and 1 is 1 itself
        catalan[0]= catalan[1]= 1;
        for(int i= 2; i<= n; i++)
        {
            // inner loop for all possilbe combinations
            for(int j= 0; j<i; j++)
            {
                catalan[i]+= ((catalan[j]) * (catalan[i-j-1]))%mod;   
            }
            catalan[i]%= mod;
        }
        
        return (int)catalan[n]%mod;
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends