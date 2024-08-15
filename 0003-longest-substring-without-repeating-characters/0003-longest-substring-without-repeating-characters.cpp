class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)
        {
            return 0;
        }
        if(s==" " || n==1)
        {
            return 1;
        }
        int maxLen=INT_MIN;
        for(int i=0;i<n;i++)
        {
            unordered_set<int> set;
            for(int j=i;j<n;j++)
            {
                if(set.find(s[j]) != set.end()) // if the element is already there in the set
                {
                    break;
                }
                maxLen=max(maxLen,j-i+1);
                set.insert(s[j]);
                
            }
        }
        return maxLen;
        
    }
};