class Solution {
public:
    bool solve(int i,int j,int index,int m,int n,vector<vector<int>> &vis,vector<vector<char>>& board, string word)
    {
        if(index>=word.size())
        {
            return true;
        }
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j]==true || board[i][j]!=word[index])
        {
            return false;
        }

        vis[i][j]=true;
        if(solve(i+1,j,index+1,m,n,vis,board,word))
        {
            return true;
        }
        if(solve(i-1,j,index+1,m,n,vis,board,word))
        {
            return true;
        }
        if(solve(i,j+1,index+1,m,n,vis,board,word))
        {
            return true;
        }
        if(solve(i,j-1,index+1,m,n,vis,board,word))
        {
            return true;
        }
        vis[i][j]=false;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0]){
                vector<vector<int>> vis(m,vector<int> (n,0));
                if(solve(i,j,0,m,n,vis,board,word))
                {
                    return true;
                }
                }
            }
        }
        return false;
        
    }
};