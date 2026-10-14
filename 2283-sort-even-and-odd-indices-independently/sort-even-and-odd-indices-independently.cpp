class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<nums.size();i++){
            if((i & 0x1)==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        vector<int> ans;
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        for(int i=0;i<nums.size();i++){
            if((i & 0x1)==0) ans.push_back(even[i/2]);
            else ans.push_back(odd[i/2]);
        }
        return ans;
    }
};