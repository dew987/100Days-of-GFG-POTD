//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        
        int dir= 0; //variable to represent direction
        int lastone= -1; //represents the lastone getting the ticket
        
        int start= 1, end= N;//pointer to the current start and current end
        if(start== 1 && end== 1)//if only 1 person in queue then he/she will get first
            return 1;
        while(start<end)
        {
            if(dir== 0)//from front of the queue
            {
                if(start+ k < end) 
                {
                    start+= k;
                    lastone= start;
                }
                else
                {
                    start+= k;
                    lastone= end;
                }
                dir= 1;
                
            }
            else //if(dir== 1) //from back of the queue
            {
                if(end-k> start)
                {
                    end-= k;
                    lastone= end;
                }
                else
                {
                    
                    end-= k;
                    lastone= start;
                }
                
                dir= 0;
            }
        }
        
        return lastone;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends