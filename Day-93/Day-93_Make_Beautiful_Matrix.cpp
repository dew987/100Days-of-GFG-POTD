//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        // make matrix beautiful
        int *rowsum= new int[n];
        int *colsum= new int[n];
        int maxi= 0;
        int ans= 0;
        //finding maximum value in rows and cols
        for(int i= 0; i<n; i++)
        {
            rowsum[i]= 0;
            colsum[i]= 0;
            for(int j= 0; j<n; j++)
            {
                rowsum[i]+= matrix[i][j];
                colsum[i]+= matrix[j][i];
            }
            
            if(maxi< max(rowsum[i], colsum[i]))
                maxi= max(rowsum[i], colsum[i]);
        }
        for(int i= 0; i<n; i++)
        {
            rowsum[i]= maxi-rowsum[i];
            colsum[i]= maxi-colsum[i];
            
            // cout<<rowsum[i]<<" "<<colsum[i]<<endl;
        }
        
        for(int i= 0; i<n; i++)
        {
            for(int j= 0; j<n; j++)
            {
                if(!rowsum[i]== 0 || !colsum[j]== 0)
                {
                    int mini= min(rowsum[i], colsum[j]);
                    rowsum[i]-= mini;
                    colsum[j]-= mini;
                    ans+= mini;
                }
            }
        }
     
       return ans;
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends