class Solution {
public:
    int beautySum(string s) {
        
        int n=s.length();
        
        int sum=0;
        int temp;
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++)
            {
                mp[s[j]]++;
                
                int maxi=INT_MIN;
                int mini=INT_MAX;
                //finding max and min freq

                for(auto &i:mp)
                {
                    maxi=max(maxi,i.second);
                    mini=min(mini,i.second);
                }
                
                sum+=(maxi-mini);
                
            }
            
        }
        return sum;
    }
};