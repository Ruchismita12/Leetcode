class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        
        for(char c:s)
        {
            mp[c]++;
        }
        stack<char> st;
        string temp="";
        while(!mp.empty())
        {
            int maxi=INT_MIN;
            char maxChar='\0';
            for(auto &i:mp)
            {
                if(i.second > maxi)
                {
                    maxi=max(maxi,i.second);
                    maxChar=i.first;
                }
            
            }
            temp.append(maxi,maxChar);
            mp.erase(maxChar);
           
        }
        
        return temp;
        
    }
};