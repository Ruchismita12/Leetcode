class Solution {
public:
    void solve(int index,vector<int> ds,set<vector<int>> &res,vector<int>& nums)
    {
        if(index==nums.size())
        {
            sort(ds.begin(),ds.end());
            res.insert(ds);
            return;
        }
        ds.push_back(nums[index]);
        solve(index+1,ds,res,nums);
        ds.pop_back();
        solve(index+1,ds,res,nums);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; //storing the ans
        set<vector<int>> res; //for storing unique subsets
        vector<int> ds;
        solve(0,ds,res,nums);
        for (auto it = res.begin(); it != res.end(); it++) {
           ans.push_back( * it);
        }
        
        return ans;
        
    }
};





/*
class Solution {
  public:
    void fun(vector < int > & nums, int index, vector < int > ds, set < vector < int >> & res) {
      if (index == nums.size()) {
        sort(ds.begin(), ds.end());
        res.insert(ds);
        return;
      }
      ds.push_back(nums[index]);
      fun(nums, index + 1, ds, res);
      ds.pop_back();
      fun(nums, index + 1, ds, res);
    }
  vector < vector < int >> subsetsWithDup(vector < int > & nums) {
    vector < vector < int >> ans;
    set < vector < int >> res;
    vector < int > ds;
    fun(nums, 0, ds, res);
    for (auto it = res.begin(); it != res.end(); it++) {
      ans.push_back( * it);
    }
    return ans;
  }
};  */