class Solution {
public:
    int climbStairs(int n) {
        if(n==2) return 2;
        if(n==1) return 1;
        int a=1,b=2; //a,b is no of ways for 1 and 2stairs respectively
        for(int i=3;i<=n;i++){
            int c=a+b; //ways to climb n stairs ways(i-1)+ways(i-2)
            a=b;
            b=c;
        }
        return b;
    }
};