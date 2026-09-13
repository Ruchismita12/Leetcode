class Solution {
public:
    int findkthGrammar(int n,int k,int flip)
    {
        //B.C
        if(n==1) return flip%2==0 ? 0:1;
        if(k%2==0)
        {
            return findkthGrammar(n-1,k/2,flip+1);
        }
        else
        {
            return findkthGrammar(n-1,(k+1)/2,flip);
        }

    }
    int kthGrammar(int n, int k) {
        //flip is 0
        return findkthGrammar(n,k,0);
        
    }
};