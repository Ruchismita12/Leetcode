class Solution {
public:
    int solveMem(int index,int buy,vector<int>& prices,vector<vector<int>> &dp)
    {
        int n=prices.size();
        if(index==n)
        {
            return 0;
        }
        if(dp[index][buy] != -1)
        {
            return dp[index][buy];
        }
        int profit=0;
        if(buy) //buy=1
        {
            int buyKaro=-prices[index]+solveMem(index+1,0,prices,dp);
            int skipKaro=0 + solveMem(index+1,1,prices,dp);
            profit=max(buyKaro,skipKaro);

        }
        else //buy=0
        {
            int sellKaro=prices[index]+solveMem(index+1,1,prices,dp);
            int skipKaro1=0 + solveMem(index+1,0,prices,dp);
            profit=max(sellKaro,skipKaro1);

        }
        return dp[index][buy]=profit;
        
    }
    int maxProfit(vector<int>& prices) {
        //return solveMem(0,1,prices);
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int> (2,-1));
        return solveMem(0,1,prices,dp);

        
    }
};