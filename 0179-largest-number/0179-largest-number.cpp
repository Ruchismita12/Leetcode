class Solution {
public:
    string largestNumber(vector<int>& nums) {

        //First convert each of the number to string
        vector<string> numString;
        for(int num:nums)
        {
            numString.push_back(to_string(num));
        }

        auto compare=[](string &a,string &b)
        {
            return a+b > b+a;
        };

        //sort the numString according to the comparator
        sort(numString.begin(),numString.end(),compare);

        if(numString[0]=="0")
        {
            return "0";
        }
        
        string result="";
        for(string i : numString)
        {
            result+=i;
        }

        return result;
        
    }
};