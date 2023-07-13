//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        //set to store unique frequency
        set<int> s1;
        //map to store frequency of elements
        map<int, int> mp1;
        for(int i= 0; i<n; i++)
        {
            mp1[arr[i]]++;
        }
        for(auto it: mp1)
        {
            if(s1.find(it.second)== s1.end())
            {
                s1.insert(it.second);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends