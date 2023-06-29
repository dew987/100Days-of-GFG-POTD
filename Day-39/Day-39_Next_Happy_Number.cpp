//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int n)
    {
        if(n== 1 || n== 7)
            return true;
        while(n>9)
        {
            int newNum= n;
            n= 0;
            while(newNum> 0)
            {
                n+= pow(newNum%10, 2);
                newNum/= 10;
            }
            if(n== 1 || n== 7)
                return true;
        }
        return false;
    }
    int nextHappy(int N){
        // code here
        for(int i= N+1; ; i++)
        {
            if(isHappy(i))
                return i;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends