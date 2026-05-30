
class Solution {
public:
void subsetsWithDupUtil(vector<int>& nums,int i,vector<int>& output,set<vector<int>>& ans )
{
    //B.c
    if(i>=nums.size())
    {
        
        ans.insert(output);
        return;
        
        
    }

    //exclude
    subsetsWithDupUtil(nums,i+1,output,ans);

    //include
    output.push_back(nums[i]);
    subsetsWithDupUtil(nums,i+1,output,ans);
    output.pop_back();


}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> output;
        set<vector<int>> ans;
        
        subsetsWithDupUtil(nums,0,output,ans);

        return vector<vector<int>>(ans.begin(),ans.end());
        
    }
};