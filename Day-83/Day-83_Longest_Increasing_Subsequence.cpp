//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int> list(n + 1, 1e9);
       list[0]= -1;
       
       for(int i= 0; i<n; i++)
       {
           auto p= lower_bound(list.begin(), list.end(), a[i]) -list.begin();
           if(p<n+1)
           {
               list[p]= a[i];
           }
           
       }
       
       for(int i= n; i>0; i--)
       {
           if(list[i]!= 1e9)
                return i;
       }
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends