class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;

        while(n%2==0){
            n/=2;
        }
        return n==1; // only 2 divided by 2 gives 1
    }
};