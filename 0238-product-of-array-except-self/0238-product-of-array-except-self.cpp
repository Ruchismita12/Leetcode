class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int p2=1;
        int index;
        unordered_map<int,int> m;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            p=p*nums[i];
        }
        if(p==0)
        {
            for(int i=0;i<n;i++)
            {
                m[nums[i]]++;
            }
            if(m[0]>1)
            {
                return ans;
            }
            else if(m[0]==1)
            {
                for(int i=0;i<n;i++)
                {
                    if(nums[i]!=0)
                    {
                        p2=p2*nums[i];
                    }
                    else if(nums[i]==0)
                    {
                        index=i;
                    }
                }
                ans[index]=p2;
                return ans;
            }

        }
        else
        {
            for(int i=0;i<n;i++)
            {
            p=p/nums[i];
            ans[i]=p;
            p=p*nums[i];
            }
        }
        
        return ans;
        
    }
};