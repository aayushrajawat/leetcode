class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool arr[26]={false};
        for(int i=0;i<sentence.length();i++){
            char ch=sentence[i];
            arr[ch-'a']= true;
        }
        for(int i=0;i<26;i++){
           if(!arr[i]) return false;
        }
        return true;
    }
};