//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        
        sort(arr,arr+n);
        
        int ans = arr[n-1]-arr[0];
        
        for(int i=0;i<n-1;i++)
        {
            //point is at some i tyala motha kr ani tyapeksha mothyala chota kr 
            //no sense to make chota more chota arr[0]-k and bada to arr[n-1]+k biggest
            if(arr[i+1]>=k)
            ans = min( max(arr[n-1]-k,arr[i]+k) - min(arr[0]+k,arr[i+1]-k) , ans);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends