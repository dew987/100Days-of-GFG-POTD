//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
            int hash[26]= {0};
            string str= "";
            queue<char> q1;
            for(int i=0; i<A.length(); i++)
            {
                 hash[A[i]-'a']++;
                 if(hash[A[i]-'a']==2)
                 {
                     if(q1.front()== A[i])
                         q1.pop();
                 }
                 else if(hash[A[i]-'a']==1)
                {
                     q1.push(A[i]);
                }
                
                while(!q1.empty() && hash[q1.front()-'a']>1)
                {
                    q1.pop();   
                }
                if(q1.empty())
                   str.push_back('#');
                else
                   str.push_back(q1.front());
            }
            return str;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends