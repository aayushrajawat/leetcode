class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> v;
        int l=0;
        int r=n-1;
        while(l<=r){
            int sum=numbers[l]+numbers[r];
            if(sum==target){
                v.push_back(l+1);//indicies start from 1 and not from 0
                v.push_back(r+1);
                break;
            }
            else if(sum>target){
                r--;
            }
            else l++;
        }
        return v;
    }
};