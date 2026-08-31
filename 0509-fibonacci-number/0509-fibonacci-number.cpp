class Solution {
public:
    int fib(int n) {
        //B.C
        if(n==0) return 0;
        if(n==1) return 1;
        //Recursion
        int ans=fib(n-1)+fib(n-2);
        return ans;
        
    }
};