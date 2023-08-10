//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int **lcsTable= new int*[x+1];
        for(int i= 0; i<=x; i++)
        {
            lcsTable[i]= new int[y+1];
            for(int j= 0; j<=y; j++)
            {
                lcsTable[i][j]= 0;
            }
        }
        
        for(int i= 1; i<=x; i++)
        {
            for(int j= 1; j<=y; j++)
            {
                if(s1[i-1]== s2[j-1])
                {
                    lcsTable[i][j]= 1+ lcsTable[i-1][j-1];
                }
                else{
                    if(lcsTable[i][j-1]>= lcsTable[i-1][j])
                        lcsTable[i][j]= lcsTable[i][j-1];
                    else
                        lcsTable[i][j]= lcsTable[i-1][j];
                }
            }
        }
        return lcsTable[x][y];
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends