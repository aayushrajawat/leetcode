class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int i=0; //even
        int j=1; //odd  
        while(i<n && j<n){ 
//(nums[i] & 0x1)==0 to determine even numbers which is fast computation wise
            if((nums[i] & 0x1)==0) //even checking
                i+=2;
            else if((nums[j] & 0x1)!=0) //odd checking
                j+=2;
            else{ 
                swap(nums[i],nums[j]);
                i+=2;
                j+=2;
            }
        }
        return nums;
    }
};