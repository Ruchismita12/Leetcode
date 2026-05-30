class Solution {
public:
    void combinationSumUtil(vector<int>& candidates, int target,int i, vector<int> &output,set<vector<int>>& ans )
    {
        if(target==0)
        {
            //we have to use temp vector otherwise, output is getting changed everytime
            vector<int>temp=output;
            sort(temp.begin(),temp.end());
            ans.insert(temp);
            return;
        }

        if(target<0)
        {
            return;
        }
        for(int j=0;j<candidates.size();j++)
        {
            output.push_back(candidates[j]);
            combinationSumUtil(candidates,target-candidates[j],i+1,output,ans);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        set<vector<int>> ans; 
        combinationSumUtil(candidates,target,0,output,ans);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};