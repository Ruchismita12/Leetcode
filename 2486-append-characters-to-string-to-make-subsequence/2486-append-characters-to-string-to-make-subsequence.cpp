class Solution {
public:
    int appendCharactersUtil(string& s, string& t,int i,int j)
    {
        //B.C
        if(j==t.size())
        {
            return 0;
        }

        if(i==s.size())
        {
            return t.size()-j;
        }

        //Ek case solve 
        if(s[i]==t[j])
        {
            return appendCharactersUtil(s,t,i+1,j+1);
        }
        //Baki recursion solve kar dega
        return appendCharactersUtil(s,t,i+1,j);

    }
    int appendCharacters(string s, string t) {
        return appendCharactersUtil(s,t,0,0);
        
        
    }
};