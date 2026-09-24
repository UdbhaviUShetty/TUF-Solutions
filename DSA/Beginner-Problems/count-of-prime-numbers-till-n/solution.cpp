class Solution {
public:
    int primeUptoN(int n) {
        if(n<2)
            return 0;
      int count=1;
      
      vector<char> isPrime(n+1,true);
     
    for(int i=3;i*i<=n;i+=2)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=2*i)
                {
                    isPrime[j]=false;
                }
        }
    }
    for(int i=3;i<=n;i+=2)
    {
        if(isPrime[i])
           { 
                count++;
           }
    }
    return count;
    }
};