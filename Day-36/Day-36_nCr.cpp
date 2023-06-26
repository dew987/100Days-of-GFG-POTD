//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution{
public:
#define mod 1000000007
    int nCr(int n, int r){
        // code here
        if(n<r )
           return 0; 
        
        if(r==0 || r== n)
           return 1; 
        r= min(r, n-r);
        int arr[r+1]= {0};
        arr[0]= 1;
        for(int i=1; i<=n; i++)
        {
            for(int j= min(i, r); j>0; j--)
            {
                arr[j]= ( arr[j]%mod + arr[j-1]%mod)%mod;
            }
        }
        return arr[r]%mod;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends