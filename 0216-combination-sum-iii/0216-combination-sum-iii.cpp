class Solution {
public:
    void combinationSum3Util(vector<int> &candidates,int i,int k,int target,vector<int> &output,vector<vector<int>> &ans)
    {
        if((target==0) && (output.size()==k))
        {
            ans.push_back(output);
            return;
        }
        if(target < 0)
        {
            return;
        }

        for(int start=i;start<candidates.size();start++)
        {
            if(candidates[i] > target) break;
            if((start > i) && (candidates[start]==candidates[start-1])) continue;

            //include
            output.push_back(candidates[start]);
            combinationSum3Util(candidates,start+1,k,target-candidates[start],output,ans);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;
        vector<int> candidates={1,2,3,4,5,6,7,8,9};
        combinationSum3Util(candidates,0,k,n,output,ans);
        return ans;

        
    }
};