class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        for(int i=0;i<n;i+=2*k){ 
            //swapping k character in each 2k block
            int left=i;
            int right=min(i+k-1,n-1);
            //min handle cases where fewer than k characters remain
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};