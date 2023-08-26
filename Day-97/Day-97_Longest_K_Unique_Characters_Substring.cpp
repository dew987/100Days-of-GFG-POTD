//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int i= 0;
        int maxLength= -1;
        unordered_map<char, int> mp;
        for(int j= 0; j<s.length(); j++)
        {
            mp[s[j]]++;
            int calcDistinct= mp.size();
            if(calcDistinct>k)
            {
                while(mp.size()>k)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]== 0)
                        mp.erase(s[i]);
                    i++;
                }
            }
            
            if(calcDistinct== k)
            {
                maxLength= max(maxLength, j-i+1);
            }
        }
        
        return maxLength;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends