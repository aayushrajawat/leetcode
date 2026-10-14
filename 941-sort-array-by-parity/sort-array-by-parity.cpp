class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if((nums[i] & 0x1)==0){
                i++;
            }
//(nums[i] & 0x1)==0 to determine even numbers which is fast computation wise      
            else if((nums[i] & 0x1)!=0 && (nums[j]& 0x1)==0){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        return nums;
    }
};