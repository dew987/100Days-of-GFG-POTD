//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
     
        int i=0, j=0;
        int count=0;
        long long pro=1;
        while(j<= n-1)
        {
           pro*=arr[j];
           
               while(i<j && pro>= k)
               {
                   pro/= arr[i];
                   i++;
               }
           if(pro< k)
           {
               count+= (j-i)+1;
            
           }
           j++;
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends