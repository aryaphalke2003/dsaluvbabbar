// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        set<vector<int>> st;
        vector<vector<int>> vec;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int s=j+1;
                int e=n-1;
                
                while(s<e)
                {
                    int sum=arr[i]+arr[j]+arr[s]+arr[e];
                    if(sum==k)
                    {
                        st.insert({arr[i],arr[j],arr[s],arr[e]});
                        s++;
                        e--;
                    }
                    else if(sum>k)
                    {
                        e--;
                    }
                    else
                    {
                        s++;
                    }
                }
            }
        }
        
        for(auto it:st)
        vec.push_back(it);
        
        return vec;
    }
};