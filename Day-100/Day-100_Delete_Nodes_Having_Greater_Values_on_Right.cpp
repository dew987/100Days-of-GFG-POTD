//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    private:
    void  reverse(Node * &head, Node *curr, Node *prev)
    {
        //function to reverse the linked list
        if(curr== NULL)
        {
            head= prev;
            return;
        }
        
        Node *forward= curr->next;
        curr->next= prev;
    
        reverse(head, forward, curr);
    }
    
    public:
    
    Node *compute(Node *head)
    {
        // your code goes here
        
        reverse(head, head, nullptr);
        Node *curr= head->next, *prev= head;
        
        int maximum= head->data;
        while(curr!= nullptr)
        {
            if(curr->data< maximum)
            {
                prev->next= curr->next;
                delete curr;
                curr= prev->next;
            }
            else
            {
                maximum= curr->data;
                prev= curr;
                curr= curr->next;
            }
        }
        
        reverse(head, head, nullptr);
        
        return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends