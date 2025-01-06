class Solution {
    int unique(int i,int j,int m,int n,int dp[][])
    {
        if(i>=m || j>=n)
        {
            return 0;
        }
        if(i==(m-1) && j==(n-1))
        {
            return 1;
        }
        else if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        else
        {
            return dp[i][j]=unique(i+1,j,m,n,dp)+unique(i,j+1,m,n,dp);
        }
    }
    public int uniquePaths(int m, int n) {
        int dp[][]=new int[m+1][n+1];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=-1;
            }
        }
        int ans=unique(0,0,m,n,dp);
        if(m==1 && n==1)
        {
            return ans;
        }
        return dp[0][0];

        
    }
}