//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    void findPermutation(vector<string> &ans, string S, int ind)
    {
        if(ind== S.length())
        {
            ans.push_back(S);
            return;
        }
        
        for(int i= ind; i<S.length(); i++)
        {
            swap(S[i], S[ind]);
            
            findPermutation(ans, S, ind+1);
            
            swap(S[i], S[ind]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        findPermutation(ans, S, 0);
        sort(ans.begin(), ans.end());
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
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends