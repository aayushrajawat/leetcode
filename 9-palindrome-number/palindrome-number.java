class Solution {
    public boolean isPalindrome(int x) {
        int reverse=0;
        int temp=x;
        while(x>0){
            reverse=((reverse*10) + (x%10));
            x/=10;
        }
        
       
        return(temp==reverse);
       
       
    }
}