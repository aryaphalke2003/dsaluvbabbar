class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int down=-1;
        int n= nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i] < nums[i+1])
            {down=i;
            break;}
        }

        if(down==-1)
        reverse(nums.begin(),nums.end());
        else{
            int nxt=-1;
            for(int i=n-1;i>down;i--)
            {
                if(nums[i]>nums[down])
                {nxt=i;
                break;}
            }
            swap(nums[down],nums[nxt]);
            reverse(nums.begin()+down+1,nums.end());
            
        }
        
    }
};