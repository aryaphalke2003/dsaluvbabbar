//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    sort(arr, arr+size); // sort the array in non-decreasing order
    
    int i = 0, j = 1; // initialize two pointers, i and j
    
    while(j < size) { // while j is within bounds of the array
        int diff = arr[j] - arr[i]; // calculate the difference between arr[j] and arr[i]
        
        if(diff == n) { // if the difference is equal to n
            return true; // we have found a pair with a difference of n, return true
        }
        else if(diff < n) { // if the difference is less than n
            j++; // move j to the right
        }
        else { // if the difference is greater than n
            i++; // move i to the right
            if(i == j) { // if i and j are pointing to the same element
                j++; // move j to the right
            }
        }
    }
    
    return false; // no pair with a difference of n was found, return false
}