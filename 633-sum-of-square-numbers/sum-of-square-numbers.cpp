class Solution {
public:
    bool isPerfectSquare(int n){
        int root=sqrt(n);
        if(root*root==n) return true;

        else return false;
    }
    bool judgeSquareSum(int c) {
        int x=0;  //a^2
        int y=c;  //b^2

        while(x<=y){
            if(isPerfectSquare(x) && isPerfectSquare(y)){ 
                return true;
            }
            else if(!isPerfectSquare(y)){
                y=(int)sqrt(y)*(int)sqrt(y);  //makes y a perfect square less than y
                x=c-y;
            }
            else{ //x is not perfect square
                x=((int)sqrt(x)+1)*((int)sqrt(x)+1);  //makes x a perfect square greater than x
                y=c-x;
            }
        }
         return false;
    }
};