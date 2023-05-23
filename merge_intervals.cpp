class Solution {
public:
    //[0 4][1 2] == [0 4]
    //best push and modify
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(auto it: intervals)
        {
            //last elemet ans[n-1] is array so arr[n-1][0] arr[n-1][1]
            //another way is ans.back()[1] or ans.back[0]
            if(ans.size()==0||ans[ans.size()-1][1] < it[0])
            ans.push_back(it);
            else
            ans[ans.size()-1][1] = max(ans[ans.size()-1][1] , it[1]);
        }

        return ans;
    }
};