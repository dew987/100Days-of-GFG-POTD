//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        //code
        sort(a.begin(), a.end());
        //1 3 4 7 9 9 12 56
        
        long long ans= LLONG_MAX;
        long long i= 0, j= m-1;
        while(j<n)
        {
            if(a[i]!= 0 && a[j]-a[i]<ans)
            {
                ans= a[j]-a[i];
            }
            j++;
            i++;
        }
        
        return ans;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends