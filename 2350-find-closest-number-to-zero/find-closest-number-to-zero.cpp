class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int n=nums.size();
       int ans=nums[0];
       for(int i=0;i<n;i++){
        int x=nums[i];
        if(abs(x)<abs(ans) || (abs(x)==abs(ans) && x>ans))
        ans=x;
       }
       return ans;
    }
};