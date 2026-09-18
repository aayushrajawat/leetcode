class Solution {
public:
    bool check(double mid,vector<int>& dist, double hour){
        int n=dist.size();
        double count=0;
        double m=mid;
        for(int i=0;i<n;i++){
            if(i!=n-1)
                count+=ceil(dist[i]/mid);
            else 
                count+=dist[i]/mid;
        }
        if(count>hour) return false;
        return true;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        int mx=-1;
        for(int i=0;i<n;i++)
            mx=max(mx,dist[i]);
        int low=1;
        int high=10000000;
        int speed=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(mid,dist,hour)){
                speed=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        if(speed==-1) return -1;
        return speed;
    }
};