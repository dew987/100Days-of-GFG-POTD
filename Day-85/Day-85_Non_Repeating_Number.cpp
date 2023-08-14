//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n= nums.size();
        int xorNums= 0;
        for(int i= 0; i<n; i++)
        {
            xorNums^= nums[i];
        }
        
        int firstDifferentBit= 0;
        for(int i= 0; i<32; i++)
        {
            if(xorNums>>i&1== 1)
            {
                firstDifferentBit= i;
                break;
            }
        }
        
        // cout<<xorNums<<" "<<firstDifferentBit<<endl;
        
        int cat1= 0;
        int cat2= 0;
        for(int i= 0; i<n; i++)
        {
            if(nums[i]>>firstDifferentBit&1== 1)
            {
                cat1^= nums[i];
            }
            else
            {
                cat2^= nums[i];
            }
        }
        
        if(cat1<cat2)
        {
            return {cat1, cat2};
        }
        else
        {
            return {cat2, cat1};
        }
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends