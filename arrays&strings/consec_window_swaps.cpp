//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        
        int tc=0;
        for(int i=0;i<n;i++)
        if(arr[i]<=k)
        tc++;
        
        
        int cc=0;
        int mc=0;
        for(int i=0;i<tc;i++)
        if(arr[i]<=k)
        cc++;
        
        mc=cc;
        
        for(int i=tc;i<n;i++)
        {
            if(arr[i-tc]<=k)
            cc--;
            
            if(arr[i]<=k)
            cc++;
            
            mc=max(mc,cc);
        }
        
        return tc-mc;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends