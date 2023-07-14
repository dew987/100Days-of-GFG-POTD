//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends

class Solution
{
    public:
        void merge(int arr[], int low, int mid, int high)
        {
            int n1= mid+1-low;
            int n2= high-mid;
            int *a= new int[n1];
            int *b= new int[n2];
            
            for(int i= 0; i<n1; i++)
                a[i]= arr[low+i];
            for(int j= 0; j<n2; j++)
                b[j]= arr[mid+1+j];
                
            int i= 0, j= 0, k= low;
            while(i<n1 && a[i]<0)
                arr[k++]= a[i++];
            while(j<n2 && b[j]<0)
                arr[k++]= b[j++];
            while(i<n1)
                arr[k++]= a[i++];
            while(j<n2)
                arr[k++]= b[j++];
        }
        void mergeSort(int arr[], int low, int high)
        {
            if(low<high)
            {
                int mid= (low+high)/2;
                mergeSort(arr, low, mid);
                mergeSort(arr, mid+1, high);
                merge(arr, low, mid, high);
            }
        }
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            mergeSort(arr, 0, n-1);
        }
};


//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends