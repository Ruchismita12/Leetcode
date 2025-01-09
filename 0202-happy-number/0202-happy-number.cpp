class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
        {
            return true;
        }
        
        unordered_set<int> seen;
        
        while(n!=1)
        {
            int s=0;
            while(n!=0)
            {
                int dg=n%10;
                s=s+dg*dg;;
                n=n/10;
            }
            n=s;
            if(seen.find(n)!=seen.end())
            {
                return false;
            }
            seen.insert(n);

        }
        return true;
        
    }
};