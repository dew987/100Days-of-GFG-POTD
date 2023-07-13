//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends


class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int startRow= 0, startCol= 0;
 		int endRow= n-1, endCol= m-1;
 		int count= 0;
 		int ans= -1;
 		while(count< k)
 		{
 		    for(int j= startCol; j<=endCol && count<k; j++)
 		    {
 		        ans= a[startRow][j];
 		        count++;
 		    }
 		    startRow++;
 		    for(int i= startRow; i<=endRow && count<k; i++)
 		    {
 		        ans= a[i][endCol];
 		        count++;
 		    }
 		    endCol--;
 		    for(int j= endCol; j>=startCol && count<k; j--)
 		    {
 		        ans= a[endRow][j];
 		        count++;
 		    }
 		    endRow--;
 		    for(int i= endRow; i>=startRow && count<k; i--)
 		    {
 		        ans= a[i][startCol];
 		        count++;
 		    }
 		    startCol++;
 		}
 		return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends