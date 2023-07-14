//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        for(int j=0; j<k; j++)
        {
            if(updates[j]<=n)
                 a[updates[j]-1]++;
        }
        long long sum=0;
        for(int j=0; j<n; j++)
        {
             sum+= a[j];
             a[j]= sum;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n]={0}, updates[k]={0};
		for(int i = 0; i < k; i++)
		cin>>updates[i];
		Solution ob;
		ob.update(a, n, updates, k);
		
		for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends