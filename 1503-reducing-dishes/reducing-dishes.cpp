class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        // using suffix sum in satisfaction. Sort the array
        // if we encounter a -ve no we will take values after that idx

        int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        int suf[n];
        suf[n-1]=satisfaction[n-1];

        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+satisfaction[i];
        }

        int idx=-1; //idx for finding -ve idx
        for(int i=0;i<n;i++){
            if(suf[i]>=0) { 
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0; // no +ve element
        // like time coffecient
        int time=1;
        int maxSatis=0;
        for(int i=idx;i<n;i++){
            maxSatis+=satisfaction[i]*time;
            time++;
        }
        return maxSatis;
    }
};