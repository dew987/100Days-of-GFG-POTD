//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        long long s1Sum= 0, s2Sum= 0, s3Sum= 0;
        //summing s1, s2, s3
        for(auto it: s1)
        {
            s1Sum+= it;
        }
        
        for(auto it: s2)
        {
            s2Sum+= it;
        }
        
        for(auto it: s3)
        {
            s3Sum+= it;
        }
        int i= 0, j= 0, k= 0;
        while(true)
        {
            if(i>=N1 || j>= N2 || k>= N3)
                break;
            if(s1Sum== s2Sum && s2Sum== s3Sum)
                return s1Sum;
            else if(s1Sum> s2Sum || s1Sum> s2Sum)
                s1Sum-= s1[i++];
            else if(s2Sum> s1Sum || s2Sum> s3Sum)
                s2Sum-= s2[j++];
            else if(s3Sum> s1Sum || s3Sum> s2Sum)
                s3Sum-= s3[k++];
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends