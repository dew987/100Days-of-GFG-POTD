//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int arr[], int n)
    {
        // Your code goes here
        int cnt= 0;
        int maxflip= INT_MIN;
        int currflip= 0;
        for(int i= 0; i<n; i++)
        {
            if(arr[i]== 0)
            {
                currflip++;
            }
            else if(currflip>0)
            {
                currflip--;
            }
            if(maxflip<currflip)
            {
                maxflip= currflip;
            }
        }
        
        for(int i= 0; i<n; i++)
        {
            cnt+= arr[i];
        }
        cnt+= maxflip;
        return cnt;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends