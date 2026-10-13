class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]*=nums[i];
        }
        sort(nums.begin(),nums.end());
        long long add=0;
        long long sub=0;
        for(int i=0;i<n/2;i++)
            sub+=nums[i];
        for(int i=n/2;i<n;i++)
            add+=nums[i];
        
        return add-sub;
    }
};