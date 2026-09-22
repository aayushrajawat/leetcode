class Solution {
    public int firstUniqChar(String s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s.indexOf(s.charAt(i))==s.lastIndexOf(s.charAt(i)))
                return i;
           
        }
        return -1;
    }
}