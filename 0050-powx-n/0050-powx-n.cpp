class Solution {
public:
    double myPow(double x, int n) {
        long long power=n;
        double result=1.0;
        if(power < 0)
        {
            x=1/x;
            power=-power;
        }
        
        for(long long i=1;i<=power;i++)
        {
            result*=x;
        }

        
        return result;
        
    }
};