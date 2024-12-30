class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int parts=0;
        //int sum;
        auto total=accumulate(arr.begin(),arr.end(),0);
        //fits find the common sum which is total/3 , if total / 3 is divisisble , then it can be divided into 3 parts
        if(total%3!=0)
        {
            return false;
        }
        
        for(auto i=0,sum=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum == (parts+1)*total/3)
            {
                parts++;
            }
        }
        return parts>=3;
        
    }
};