class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,zeroCount=0,maxlength=INT_MIN;

        for(int right=0;right<n;right++)
        {
            if(nums[right]==0)
            {
                zeroCount++;
            }
            while(zeroCount > k)
            {
                if(nums[left]==0)
                {
                    zeroCount--;
                }
                left++;
            }
            maxlength=max(maxlength,right-left+1);
        }

        return maxlength;
        
    }
};