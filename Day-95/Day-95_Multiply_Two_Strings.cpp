//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  private:
    void sumStrings(string &ans, string &temp, int pos)
    {
        //base condition
        if(ans== ""){
            ans= temp;
            return;
        }
        int n= ans.length();
        int carry= 0;
        for(int i= 0; i<temp.length(); i++)
        {
            int sum;
            if(pos+i<n)
            {
                sum= ans[pos+i]-'0' + temp[i]-'0'+ carry;
                ans[pos+i]= '0'+sum%10;
                if(sum>= 10)
                {
                    carry= sum/10;
                }
                else
                {
                    carry= 0;
                }
            }
            else
            {
                sum= temp[i]-'0'+carry;
                ans.push_back('0'+sum%10);
                if(sum>= 10)
                {
                    carry= sum/10;
                }
                else
                {
                    carry= 0;
                }
            }
        }
        if(carry!= 0)
            ans.push_back('0'+carry);
    }
  public:
  
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       int cnt= 0;
       string ans= "";
       
       bool flag= true;
       if(s1[0]== '-' && s2[0]== '-')
        {
            flag= true;
            s1= s1.substr(1, s1.length());
            s2= s2.substr(1, s2.length());
        }
        else if(s1[0]== '-')
        {
            flag= false;
            s1= s1.substr(1, s1.length());
        }
        else if(s2[0]== '-')
        {
            flag= false;
            s2= s2.substr(1, s2.length());
        }
        
       int ind= -1;
       int i= 0;
       while(i<s1.length() && s1[i]== '0')
       {
           ind= i;
           i++;
       }
       if(ind!= -1)
            s1= s1.substr(i, s1.length());
       ind= -1;
       i= 0;
       while(i<s2.length() && s2[i]== '0')
       {
           ind= i;
           i++;
       }
       if(ind!= -1)
            s2= s2.substr(i, s2.length());
       
       if(s1== "" || s2== "")
            return "0";
            
    //   cout<<s1<<" "<<s2<<endl;
    //   cout<<s1.length()<<" "<<s2.length()<<endl;
       
       i= s2.length()-1; 
       while(i>= 0)
       {
           string temp= "";
           int carry= 0;
           int mul= s2[i]-'0';
           for(int j= s1.length()-1; j>=0; j--)
           {
               int ans= mul*(s1[j]-'0') + carry;
               temp.push_back('0'+ans%10);
               if(ans>= 10)
               {
                   carry= ans/10;
               }
               else
               {
                   carry= 0;
               }
           }
           if(carry!= 0)
                temp.push_back('0'+ carry);
           
           sumStrings(ans, temp, cnt);
           
           cnt++;
           i--;
       }
        if(flag== false)
            ans.push_back('-');
        reverse(ans.begin(), ans.end());
      
        return ans;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends