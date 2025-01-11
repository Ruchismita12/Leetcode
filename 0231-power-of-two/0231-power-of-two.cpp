class Solution {
public:
    bool isPowerOfTwo(int n) {
        //max value stored in a 32 bit is 2^31
        int ans=1;
        for(int i=1;i<=31;i++)
        {
            
            if(ans==n)
            {
                return true;
            }
            if(ans < INT_MAX/2)
            ans=ans*2;
        }
        return false;
        
    }
};