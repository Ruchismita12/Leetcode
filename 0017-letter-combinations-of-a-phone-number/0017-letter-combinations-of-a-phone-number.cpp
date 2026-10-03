class Solution {
public:
    void letterCombinationsUtil(string digits,vector<string> &mapping,string &output,vector<string> &ans, int index,int n )
    {
        if(index>=n)
        {
            ans.push_back(output);
            return;
        }

        int num=digits[index]-'0';
        string mp=mapping[num]; //mapping[2]=abc
        for(int i=0;i<mp.size();i++)
        {
            output.push_back(mp[i]); //"a"
            letterCombinationsUtil(digits,mapping,output,ans,index+1,n);
            output.pop_back();

        }

    }
    vector<string> letterCombinations(string digits) {
        int n=digits.length();
        vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output;
        vector<string> ans;
        letterCombinationsUtil(digits, mapping,output,ans,0,n);
        return ans;
        
    }
};