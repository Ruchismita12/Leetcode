class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        unordered_map<int,int> map1;
        for(int i=0;i<n;i++)
        {
            map1[nums[i]]++;
        }
        for(auto &i:map1)
        {
            if(k==0)
            {
            if(i.second > 1)  // For k=0
            {
                c++;
                
            }
            }
            else {
            if(map1.find(i.first + k)!=map1.end()) //if diff of k exists
            {
                c++;

            }
            }
        }
        
        return c;
        
    }
};