//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends

/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
     static struct Node *curr;
    void updateLL(int countNodes, int i, struct Node *q)
    {
        if(i>=countNodes/2)
        {
            if(countNodes%2== 1)
                Solution::curr= q->next;
            else
                Solution::curr= q;
            
            return;
        }
        updateLL(countNodes, i+1, q->next);
        if(Solution::curr != NULL)
        {
            int temp= q->data;
            q->data= Solution::curr->data - temp;
            Solution::curr->data= temp;
            Solution::curr= Solution::curr->next;
        }
        
    }
    struct Node* modifyTheList(struct Node *head)
    {
        int countNodes= 0;
        Node *p= head;
        while(p)
        {
            countNodes++;
            p= p->next;
        }
        
        updateLL(countNodes, 0, head);
        return head;
        
    }
};
struct Node *Solution::curr = NULL;


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends