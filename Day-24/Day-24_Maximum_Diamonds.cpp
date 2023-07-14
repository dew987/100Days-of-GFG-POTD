//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    long long maxDiamonds(int A[], int N, int k) {
        // code here
        long long profit= 0;
        int val;
        priority_queue<int> q1;
        for(int i=0; i<N; i++)
        {
            q1.push(A[i]);
        }
        while(k--)
        {
            val= q1.top();
            profit+= val;
            q1.pop();
            q1.push(val/2);
        }
        return profit;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends