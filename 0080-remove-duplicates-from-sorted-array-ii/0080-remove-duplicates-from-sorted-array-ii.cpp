class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto &i:m)
        {
            if(i.second >= 2)
            {
                ans.push_back(i.first);
                ans.push_back(i.first);
            }
            else if(i.second == 1)
            {
                ans.push_back(i.first);
            }
        }
        int space=n-ans.size();
        int ans1=ans.size();
        for(int i=0;i<space;i++)
        {
            ans.push_back('_');
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=ans[i];
        }
        sort(nums.begin(),nums.end());
        return ans1;
    }
};