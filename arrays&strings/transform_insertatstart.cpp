//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        string a=A;
        string b=B;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a!=b)
        return -1;
        
        int n=A.size();
        int i=n-1;
        int j=n-1;
        int c=0;
        
        while(i>=0&&j>=0)  //magun start krna best
        {
            cout << i << " " << j << endl; //only at r o f i!=j once i back on track done
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            else if(A[i]!=B[j])
            {
                
                i--;//only i moved back
                //GEEKSFORGEEKS
                //FORGEEEKSGEEKS
                //C++ occurs only at r o f 
                
                c++;
            }
        }
        
        return c;
        

    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends