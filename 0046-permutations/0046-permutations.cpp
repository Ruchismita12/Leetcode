class Solution {
public:
    void swap(int &a, int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    void permuteUtil(vector<int>& nums, int start, int n, vector<vector<int>> &ans)
    {
        if(start==nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i=start;i<nums.size();i++)
        {
            swap(nums[start],nums[i]);
            permuteUtil(nums, start+1,n,ans);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        permuteUtil(nums,0,n,ans);
        return ans;
        
    }
};