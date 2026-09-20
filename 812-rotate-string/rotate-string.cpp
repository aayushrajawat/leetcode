class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
            return false;
        int n=s.length();
        for
        (int i=0;i<n;i++){
            string rotate=s.substr(i)+s.substr(0,i);
// s.substr(i)-> gives every substr from i.
// s.substr(0,i)-> gives every substr from idx 0 to i.
            if(rotate==goal)
                return true;
        }
        return false;
    }
};