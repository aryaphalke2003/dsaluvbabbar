//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
   
	int minSwaps(vector<int>&arr)
	{
	    // Code here
	    int c=0;
	    int n=arr.size();
	    
	    vector<int> vec=arr;
	    sort(vec.begin(),vec.end());
	    
	    unordered_map<int,int> rightindex;
	    for(int i=0;i<n;i++)
	    rightindex[vec[i]]=i;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=vec[i])
	        { //find rightfull place of arr[i];
	        
	            int ind = rightindex[arr[i]];
	            swap(arr[i],arr[ind]); //now this arr[i] gone to its right place so now recheck this pos
	            c++;
	            i--;
	        }   
	    }
	    
	    return c;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends