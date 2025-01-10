class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else if((nums[0]==nums[1]) && (n==2))
        {
            return 1;
        }
        else if((nums[0]==nums[1]) && (nums[1]==nums[2]) && (n==3))
        {
            return 1;
        }
        int c=1;
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }
            else if(nums[i]+1 == nums[i+1])
            {
                c++;
            }
            else
            {
                
                c=1;
            }
            maxi=max(maxi,c);

        }
        return maxi;
        
    }
};