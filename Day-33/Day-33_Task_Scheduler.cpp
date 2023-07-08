//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        int count[26]= {0};
        
        int maxF= 0, maxFc= 0;
        
        for(int i= 0; i<N; i++)
        {
            count[tasks[i]-'A']++;
        }
        for(int i= 0; i<26; i++)
        {
            int x= count[i];
            if(maxF== x)
            {
                maxFc++;
            }
            if(maxF<x)
            {
                maxF= x;
                maxFc= 1;
            }
        }
        //gaps are maximumum count element - 1
        int gaps= maxF-1;
        //if multiple ele have same maxF, need to leave space for them in gaps
        int gaps_len= K- (maxFc-1);
        
        //empty slot= nnumbeer of gaps*gaps_len
        int avail_slot= gaps*gaps_len;
        
        int avail_task= N- maxF*maxFc;
        
        //place available task in total avail slot and rest as idle
        int idles= max(0, avail_slot- avail_task);
        
        return N+idles;
            
    }
};
       

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends