//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    
	    long long x=0;
	    long long ans=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        int s=i+1;
	        int e=n-1;
	        
	        while(s<e)
	        {
	            x = arr[i] + arr[s] + arr[e];
	            
	            if(x>=sum)
	            e--;
	            else
	            {
	                ans+=(e-s); //obvio is highest + lowest are giving x<sum then all in between will too so e-s
                    //1 2 3 4 s .... e
                    // s e satisfy
                    // so will s e-1 cuz sum will decrease now
                    // so will s e-2
                    // Total e-s values [s+1 .... e ----> e-(s+1)+1]
	                s++;
	            }
	        }
	    }
	    
	    return ans;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends