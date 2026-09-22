class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();

        for(int i=0;i<n;i++){
            //s.find()= index of first occurrence
            //s.rfind()=last idx of occurence
            if(s.find(s[i])==s.rfind(s[i]))
                return i;
        }
        return -1;
    }
};