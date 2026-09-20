class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int n=s.length();

        for(int i=0;i<n;i++){
        //z=122,s[i]=c=99  122-99=23  but we want c=24 so +1    
            int rev_idx='z'-s[i]+1;   
            int pos=i+1;

            ans+=rev_idx*pos;
        }
        return ans;
    }
};