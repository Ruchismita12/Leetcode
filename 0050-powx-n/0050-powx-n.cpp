class Solution {
public:
/*
Not optmised solution- Run time error
    double myPow(double x, int n) {
        //f(n)=x * f(n-1)
        
        //B.C
        if(n==1) return x;
         if(n==0) return 1;
        
        double ans;
        //recusrion
        if(n>0)
        {
            ans=x * myPow(x , n-1);
        }
        else
        {
            ans=myPow(x , n+1)/x;
            
        }
       

        return ans;
    }
*/
    double myPow(double x, int n) {
        long long N=n;
        //if n is negative
        if(N<0)
        {
            x=1/x;
            N=-N;
        }
        return fastPow(x,N);

       
    }
    double fastPow(double x, long long n)
    {
        //B.c
        if(n==0) return 1.0;

        //Divide and conquer
        double half=fastPow(x,n/2);
        if(n % 2 == 0)
        {
            return half*half;
        }
        else
        {
            return half*half*x;
        }
        
    }
        
        

};