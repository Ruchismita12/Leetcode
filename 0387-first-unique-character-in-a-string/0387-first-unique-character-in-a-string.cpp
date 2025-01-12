class Solution {
public:
    int firstUniqChar(string s) {
        int l=s.length();
        unordered_map<char,int> map1;
        for(int i=0;i<l;i++)
        {
            map1[s[i]]++;
        }
        for(int i=0;i<l;i++)
        {
            if(map1[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
        
    }
};