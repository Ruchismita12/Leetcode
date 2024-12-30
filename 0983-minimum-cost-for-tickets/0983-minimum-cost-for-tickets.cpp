class Solution {
public:
    int solveRec(int index,vector<int>& days, vector<int>& costs)
    {
        if(index>=days.size())
        {
            return 0;
        }
        //1 day pass
        int option1=costs[0]+solveRec(index+1,days,costs);
        
        //7 day pass
        int i;
        for(i=index;i<days.size() && days[i]<days[index]+7;i++);
        int option2=costs[1]+solveRec(i,days,costs);
        
        
        //30 day pass
        
        for(i=index;i<days.size() && days[i]<days[index]+30;i++);
        int option3=costs[2]+solveRec(i,days,costs);
        
        return min(option1,min(option2,option3));
    }
    
    int solveMem(vector<int> &dp,int index,vector<int>& days, vector<int>& costs)
    {
        if(index>=days.size())
        {
            return 0;
        }
        if(dp[index]!=-1)
        {
            return dp[index];
        }
        //1 day pass
        int option1=costs[0]+solveMem(dp,index+1,days,costs);
        
        //7 day pass
        int i;
        for(i=index;i<days.size() && days[i]<days[index]+7;i++);
        int option2=costs[1]+solveMem(dp,i,days,costs);
        
        
        //30 day pass
        
        for(i=index;i<days.size() && days[i]<days[index]+30;i++);
        int option3=costs[2]+solveMem(dp,i,days,costs);
        
        dp[index]=min(option1,min(option2,option3));
        return dp[index];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        //return solveRec(0,days,costs);
        vector<int> dp(n+1,-1);
        return solveMem(dp,0,days,costs);
        
    }
};