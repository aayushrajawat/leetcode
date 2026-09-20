class Solution {
public:
    bool isPalindromic(string s) {
        //converting int to binary 
        // bitset<8>(number)

        //directly converting the binary to string
        // bitset<8>(number).to_string()

        string str="";
        for(int i=0;i<s.length();i++){
            int ascii=(int)s[i];
            str+=bitset<8>(ascii).to_string();
        }
        int n=str.length();
        int l=0,r=n-1;
        while(l<=r){
            if(str[l]==str[r]){
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
};