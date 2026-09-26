class Solution {
public:
 
    void reverseString(vector<char>& s) {
        int n=s.size();
//simplest code  =>  reverse(s.begin(),s.end());
//now using two pointers
        int left=0;
        int right=n-1;
        while(left<=right){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
};