class Solution {
public:
    int countPrimes(int n) {   //Solving using sieve of Erathrostensis
        
        int c=0;
        vector<bool> prime(n+1,true);   //Firstly, initialing all the values of prime to be true considering all elements rae prime.
        prime[0]=prime[1]=false;

        for(int i=2;i<n;i++)
        {
            if(prime[i])  //If the first element is true, consider it to prime, make its multiples false
            {
                c++;
            }
            //The multiples of that particular number is made false
            for(int j=2*i;j<n;j=j+i)
            {
                prime[j]=false;
            }
        }
        return c;  //returning the count
        
    }
};