class Solution {
public:
    bool check(int mid,vector<int>& weights, int days){
        int n=weights.size();
        int m=mid;
        int daysCount=1; //given min days is 1
        for(int i=0;i<n;i++){
            if(m>=weights[i]){
                m-=weights[i];
            }
            else{
                daysCount++;
                m=mid;
                m-=weights[i];
            }
        }
        if(days<daysCount) return false;
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            if(max<weights[i]){ 
                max=weights[i];
            }
            sum+=weights[i];
        }
        int low=max;
        int high=sum;
        long ans=max;

        while(low<=high){
            int mid = (high+low)/2;
            if(check(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};