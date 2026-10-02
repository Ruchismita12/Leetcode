class Solution {
public:
    void combineRecursion(int n, int i,int k,vector<int> &output,vector<vector<int>> &ans)
    {
        if(output.size()==k)
        {
            ans.push_back(output);
            return;
        }

        for(int start=i;start<=n;start++)
        {
            output.push_back(start);
            combineRecursion(n,start+1,k,output,ans);
            output.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> output;
        combineRecursion(n, 1,k,output,ans);
        return ans;
        
    }
};