class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> s;
        int n=arr.size();
        
        for(int i=0;i<n;i++)
        {
            int bit=0;
            for(int j=i;j<n;j++)
            {
                bit=bit | arr[j];
                s.insert(bit);
            }
        }

        return s.size();
        
    }
};