//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr, arr+n);
        int sum, low, high;
        for(int i= 0; i<n-2; i++) 
            {
                //selecting ith element as the first element of the triplet
                sum= arr[i];
                low= i+1;
                high= n-1;
                //using 2 pointer approach to find the triplet with sum 0.
                while(low<high)
                {
                    if((sum+ arr[low]+arr[high])== 0)
                        return 1;
                    else if((sum+ arr[low]+arr[high])>0)
                        high--;
                    else 
                        low++;
                }
            }
            return 0;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends