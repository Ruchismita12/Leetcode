//TLE
/*
class Solution {
public:
    void combinationSum2Recursion(vector<int>& candidates, int target, int i,vector<int> &output,set<vector<int>> &ans)
    {
        if(target==0)
        {
            ans.insert(output);
            return;
        }
        if((target < 0) || (i>=candidates.size()))
        {
            return;
        }
        //include
        output.push_back(candidates[i]);
        combinationSum2Recursion (candidates, target-candidates[i], i+1, output, ans);

        //exclude
        output.pop_back();
        combinationSum2Recursion(candidates, target, i+1, output, ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        set<vector<int>> ans;
        vector<int> output;
        sort( candidates.begin(), candidates.end());
        combinationSum2Recursion( candidates,target,0,output, ans );
        return vector<vector<int>>(ans.begin(),ans.end()) ;
        
    }
};


*/



class Solution {
public:
    void combinationSum2Recursion(vector<int>& candidates, int target, int i,vector<int> &output,vector<vector<int>> &ans)
    {
        if(target==0)
        {
            ans.push_back(output);
            return;
        }
        if((target < 0) || (i>=candidates.size()))
        {
            return;
        }

        for(int start=i;start<candidates.size();start++)
        {
            //Exclude using a loop based to remove TLE
            if((start > i) && (candidates[start]==candidates[start-1]))
            {
                continue;
            }
            if(candidates[start] > target)
            {
                break;
            }

            output.push_back(candidates[start]);
            combinationSum2Recursion(candidates,target-candidates[start], start+1,output,ans);
            output.pop_back();
        }
       
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> output;
        sort(candidates.begin(), candidates.end());
        combinationSum2Recursion( candidates,target,0,output, ans );
        return ans ;
        
    }
};