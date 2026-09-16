class Solution {  //similar to 1056
public:
    bool check(int mid,vector<int>& piles, int h){
        int n=piles.size();
        long long hcount=0;

        for(int i=0;i<n;i++){
            long long z=(long long)piles[i]+mid;
            hcount += (z - 1) / mid;
        }
        if(hcount>h) return false;
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max<piles[i])
                max=piles[i];
        }
        int low=1;
        int high=max;
        int k=1;

        while(low<=high){
            int mid=(low+high)/2;
            if(check(mid,piles,h)){
                k=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return k;
    }
};