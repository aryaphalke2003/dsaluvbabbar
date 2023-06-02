//O(N) O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            int index = abs(arr[i])-1;
    
            if(arr[index]>0)            
            arr[index] = -1*arr[index];
            else
            ans.push_back(index+1);
        }
        
        for(int i=0;i<n;i++)
        if(arr[i]>0)
        ans.push_back(i+1);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends