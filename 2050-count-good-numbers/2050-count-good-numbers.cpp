class Solution {
    long long power(long long x, long long n, long long mod){
        if(n==0)return 1;
        long long half = power(x, n/2,mod);
        long long halfSq = (half*half)%mod;
        if(n%2 != 0){
            return(x*halfSq)%mod;
        }
        return halfSq;
    }
public:
    int countGoodNumbers(long long n) {
        long long even = (n+1) / 2;
        long long odd = n/2;
        long long mod = 1e9 + 7;

        long long evenWays = power(5, even, mod);
        long long oddWays = power(4, odd, mod);
        return (evenWays*oddWays) %mod;
    }
};