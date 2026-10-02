class Solution {
public:
    int maxSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        
        int maxsum=0;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                int curr=arr[i][j]+arr[i][j+1]+arr[i][j+2];
                curr+=(arr[i+1][j+1]);
                curr+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                maxsum=max(maxsum,curr);
            }
        }
        return maxsum;
    }
};