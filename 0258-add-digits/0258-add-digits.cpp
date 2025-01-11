class Solution {
public:
    int solve(int num)
    {
        int sum=0;
        while(num!=0)
        {
            int dg=num%10;
            sum+=dg;
            num=num/10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num>=10)
        {
            num=solve(num);
        }
        return num;
        
    }

};