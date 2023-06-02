//RECURSIVE

class Solution
{ 
    public:
    //Function to find the maximum money the thief can get.
    
    int solve(int arr[],int n,int i)
    {
        if(n==0)
        return 0;
        
        if(n==1)
        return arr[i];
        
        if(n==2)
        return max(arr[i],arr[i+1]);
        
        int mx1 = arr[i] + solve(arr,n-2,i+2);
        int mx2 = solve(arr,n-1,i+1);
        
        return max(mx1,mx2);
    }
    
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        return solve(arr,n,0);
    }
};


//DP

int FindMaxSum(int arr[], int n)
{
       
    vector<int> dp(n, 0);
    
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    dp[2] = max(arr[0] + arr[2], arr[1]);

    for (int i = 3; i < n; i++)
    dp[i] = max(arr[i] + dp[i-2], dp[i-1]);

    return dp[n-1];

}