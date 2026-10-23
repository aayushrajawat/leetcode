class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       // sort nums-->> prefix sum of sorted nums 
       int n=nums.size();
       int m=queries.size();
       sort(nums.begin(),nums.end());
       vector<int> ans;
       for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
       } 
       //traversing queries[i] one by one
       for(int i=0;i<m;i++){
        int maxlen=0;
        // binary search in nums(sorted array)
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=queries[i]){
                low=mid+1;
                maxlen=mid+1;
            }
            else high=mid-1;
         }
         ans.push_back(maxlen);
       }
        return ans;
    }
};