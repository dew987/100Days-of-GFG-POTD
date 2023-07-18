//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int> &s, int sizeOfStack)
    {
        // code here..

        // calculating the number of elements to be removed from main stack
        int toRemove = sizeOfStack - ceil((sizeOfStack + 1) / 2);
        // creating a temporary stack
        stack<int> temp;
        while (toRemove > 0)
        {
            temp.push(s.top());
            s.pop();
            toRemove--;
        }
        // deleting middle element of stack
        s.pop();
        // pushing the elements of stack from mid+1 to stacksize back in the main stack from temporary stack
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sizeOfStack;
        cin >> sizeOfStack;

        stack<int> myStack;

        for (int i = 0; i < sizeOfStack; i++)
        {
            int x;
            cin >> x;
            myStack.push(x);
        }

        Solution ob;
        ob.deleteMid(myStack, myStack.size());
        while (!myStack.empty())
        {
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends