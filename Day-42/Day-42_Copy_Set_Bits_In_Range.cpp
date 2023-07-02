//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here

        int temp= 0;
        int oring= 0;
        int var= r-l+1;
    
        y= y>>(l-1);
        for(int i= l; i<=r; i++)
        {
            temp= temp<<1;
            temp= (temp | (y&1));
            y= y>>1;
        }
        
        while(temp>0 || var>0)
        {
            oring= oring<<1;
            oring= (oring | (temp&1));
            temp= temp>>1;
            var--;
        }
        oring= oring<<(l-1);
    
        return (x|oring);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends