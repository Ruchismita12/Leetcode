class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        unordered_map<int,int> map1;
        unordered_set<int> s;
        for(int i=0;i<m;i++)
        {
            map1[nums1[i]]++;
        }
        vector<int> res;
        for(auto &i:map1)
        {
            res.push_back(i.first);
        }
        int res_m=res.size();
        vector<int> result;
        for(int i=0;i<res_m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(res[i]==nums2[j])
                {
                    s.insert(res[i]);
                }
            }
        }

        for(auto &j:s)
        {
            result.push_back(j);
        }
        return result;
        
    }
};