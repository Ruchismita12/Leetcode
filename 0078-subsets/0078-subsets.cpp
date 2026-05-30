class Solution {
public:
    void subsetsUtil(vector<int>& nums,int i,vector<int> &output,vector<vector<int>>& ans) 
    {
        if(i>=nums.size())
        {
            ans.push_back(output);
            return ;
        }

        //exclude
        subsetsUtil(nums,i+1,output,ans);

        //include
        output.push_back(nums[i]);
        subsetsUtil(nums,i+1,output,ans);
        output.pop_back();


    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> output;
        subsetsUtil(nums,0,output,ans);

        return ans;
        
    }
};