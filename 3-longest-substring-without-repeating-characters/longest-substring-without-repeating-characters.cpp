class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> v;
        int maxlen=0;
        int left=0;  //sliding window
        for(int right=0;right<s.size();right++){
            while(v.contains(s[right])){
                v.erase(s[left]);
                left++;
            }
            v.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};