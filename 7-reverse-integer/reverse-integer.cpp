class Solution {
public:
    int reverse(int x) {
        int a=0;
        bool isneg=x<0;
        long long y = (x < 0) ? -(long long)x : (long long)x;
        while(y>0){
            if(a>(INT_MAX-y%10)/10){
             return 0;
            }
            a=(a*10+y%10);
            y/=10;
        }
        return isneg?-a:a;
    }
};