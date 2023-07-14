//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	    void helper(set<string> &ans, string &S, int i)
	    {
	        if(i== S.length()){
	            ans.insert(S);
	            return;
	        }
	       
	        for(int k= i; k< S.length(); k++)
	        {
	            swap(S[i], S[k]);
	            helper(ans, S, i+1);
	            swap(S[i], S[k]);
	        }
	        return;
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> copp;
		    set<string> ans;
		    helper(ans, S, 0);
		    
		    for(auto it: ans)
		        copp.push_back(it);
		    sort(copp.begin(), copp.end());
		    return copp;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends