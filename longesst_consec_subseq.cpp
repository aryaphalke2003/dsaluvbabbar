//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
   int findLongestConseqSubseq(int arr[], int N) {
    //Your code here
      
    unordered_set<int> s(arr, arr+N);
  
int mx = 0;
for (int num: s) { //checking previous helps to take care of others because its for loop all elements are considered
    // Check if the previous number exists in the set
    if (s.find(num-1) == s.end()) //means previous number doesnt exist and you are the first of 
    //your subarray
    {
        int cn = num;
        int cmx = 1;
          
        // Check for consecutive numbers greater than current number
        while (s.find(cn+1) != s.end()) {
            cn++;
            cmx++;
        }
          
        // Update maximum length
        mx = max(mx, cmx);
    }
}
  
return mx;
}
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends