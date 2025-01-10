class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                p=p*nums[j];
                maxi=max(maxi,p);

            }
            p=1;
        }
        return maxi;
        
    }
};