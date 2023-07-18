//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        map<int, int> mp;
        for(int it= 0; it<n; it++)
        {
            mp[arr[it]]++;
        }
        int cnt= INT_MAX;
        int ele= 0;
        for(auto it: mp)
        {
            if(it.second<= cnt)
            {
                ele= it.first;
                cnt= it.second;
            }
        }
        return ele;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends