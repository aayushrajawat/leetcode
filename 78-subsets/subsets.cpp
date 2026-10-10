class Solution {
public:
    void subsetmaker(vector<int>& nums,vector<int> ans,vector<vector<int>>&  finalans,int idx){
        if(idx==nums.size()){
            finalans.push_back(ans);
            return;
        }
        subsetmaker(nums,ans,finalans,idx+1);
        ans.push_back(nums[idx]);
        subsetmaker(nums,ans,finalans,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        subsetmaker(nums,ans,finalans,0); //0 is starting index
        return finalans;
    }
};