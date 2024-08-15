class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact=1;
        for(int i=1;i < n;i++)
        {
            fact=fact*i;
            numbers.push_back(i);
        }
        numbers.push_back(n);   
        string ans="";
        //0 based indexing 
        k=k-1;
        while(true)
        {
            //enter first value
            ans=ans+to_string(numbers[k/fact]);
            //erase the element
            numbers.erase(numbers.begin() + k/fact);
            if(numbers.size()==0)
            {
                break;
            }
            k=k%fact;
            fact=fact/numbers.size();
        }
        return ans;
    }
};