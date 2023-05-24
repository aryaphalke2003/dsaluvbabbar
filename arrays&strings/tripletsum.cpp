//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        
       for(int i=0;i<n-2;i++)
       {
           int s = 0;
           
           int l=i+1;
           int h=n-1;
           while(l<h)
           {
               s=(A[i]+A[l]+A[h]);
               if(s==X)
               return 1;
               else if(s<X)
               l++;
               else
               h--;
           }
       }
       
       return 0;
        
       
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends