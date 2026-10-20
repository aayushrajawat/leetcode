class Solution {
public: 
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0; //for zeroes 
        int j=0; // traverse array 
        // 4 0 5 6 0 8 1 0 0 1 
        while(i<n && j<n){
            if(nums[i]==0 && nums[j]==0){ 
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
            else{
                i++;
                j++;
            }
        }    
    }
};