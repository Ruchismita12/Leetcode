class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m,n;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            n[t[i]]++;
        }
        if(m==n)
        {
            return true;
        }
        else
        {
            return false;
        }

        
        
    }
};