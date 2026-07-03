class Solution {
public:
    int MOD = 1e9 + 7;
    int recursion(long long x,long long n){
        if(n==0)return 1;
        int sum = 1;
       
        return (((n%2==1)?x:1LL)*recursion((x*x)%MOD,n/2))%MOD;
    }
    int countGoodNumbers(long long n) {
        return (((n%2==1)?5LL:1LL)*recursion(20,n/2))%MOD;
    }
};