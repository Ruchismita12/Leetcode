class Solution {
public:
    void permuteUniqueUtil(vector<int>& nums, int start, int n,vector<vector<int>> &ans )
    {
        if((start==nums.size()) && (find(ans.begin(),ans.end(),nums)==ans.end()))
        {
            ans.push_back(nums);
            return;
        }

        for(int i=start;i<nums.size();i++)
        {
            
            //if(nums[i]==nums[i+1]) continue;
            swap(nums[start],nums[i]);
            permuteUniqueUtil(nums,start+1,n,ans);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        permuteUniqueUtil(nums,0,n,ans);
        return ans;
        
    }
};