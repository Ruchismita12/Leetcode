class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_map<char,int> m;
        int ans=INT_MIN;
        if(s.length()==0)
        {
            return 0;
        }
        while(j<s.length())
        {
            m[s[j]]++;
            if(m.size()==j-i+1)
            {
                ans=max(ans,j-i+1);
            }
            else if(m.size()<j-i+1)
            {
                char l=s[i];
                m[s[i]]--;
                if(m[s[i]]==0)
                {
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        
        return ans;
    }
};