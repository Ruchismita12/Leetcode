class Solution {
public:

int solveMem(string &text1, string &text2,int i,int j,vector<vector<int>> &dp)
{
    if(i==text1.size())
    {
        return 0;
    }
    if(j==text2.size())
    {
        return 0;
    }
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans=0;
    if(text1[i]==text2[j])
    {
        ans=1+solveMem(text1,text2,i+1,j+1,dp);
    }
    else
    {
        ans=max(solveMem(text1,text2,i+1,j,dp),solveMem(text1,text2,i,j+1,dp));
    }
    return dp[i][j]=ans;
}


int solveTab(string &text1, string &text2)
{
    int n=text1.size();
    int m=text2.size();
    vector<vector<int>> dp(n+2,vector<int> (m+2,0));
    
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            int ans=0;
            if(text1[i]==text2[j])
            {
            ans=1+dp[i+1][j+1];
            }
            else
            {
            ans=max(dp[i+1][j],dp[i][j+1]);
            }
            dp[i][j]=ans;
        }
    }
    return dp[0][0];
}


int solveSO(string &text1, string &text2)
{
    int n=text1.size();
    int m=text2.size();
    
    vector<int> curr(m+2,0);
    vector<int> next(m+2,0);
    
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            int ans=0;
            if(text1[i]==text2[j])
            {
            ans=1+ next[j+1];
            }
            else
            {
            ans=max(next[j],curr[j+1]);
            }
            curr[j]=ans;
        }
        next=curr;
    }
    return next[0];
}
    int longestCommonSubsequence(string text1, string text2) {
        //int n=text1.size();
        //int m=text2.size();
        //vector<vector<int>> dp(n,vector<int> (m,-1));
        //return solveMem(text1,text2,0,0,dp);

        //return solveTab(text1,text2);
        return solveSO(text1,text2);
        
    }
};