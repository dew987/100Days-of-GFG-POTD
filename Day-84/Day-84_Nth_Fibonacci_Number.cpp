//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int recFibb(int n, vector<int> &arr)
    {
        int mod= 1e9+7;
        if(arr[n]!= -1)
            return arr[n];
        if(n==0 || n==1)
        {
            arr[n]= n;
            return n;
        }
        
        arr[n]= ( recFibb(n-1, arr)%mod +recFibb(n-2, arr)%mod)%mod;
        return arr[n];
    }
    int nthFibonacci(int n){
        // code here
        vector<int> arr(n+1, -1);
        
        return recFibb(n, arr);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends