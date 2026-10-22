class Solution {
public:
    int bestClosingTime(string customers) {
        // Y ka suffix sum
        // N ka prefix sum
        int n=customers.length();
        int pre[n+1];
        int suf[n+1];

        pre[0]=0;
        for(int i=0;i<n;i++){ //prefix
            int Ncount=0;
            if(customers[i]=='N') Ncount++;
            pre[i+1]=pre[i]+Ncount;
        }

        suf[n]=0;
        for(int i=n-1;i>=0;i--){ //suffix
            int Ycount=0;
            if(customers[i]=='Y') Ycount++;
            suf[i]=suf[i+1]+Ycount;
        }
        
        int minPen=n;
        for(int i=0;i<=n;i++){ //finding min penalty
            pre[i]+=suf[i];
            minPen=min(minPen,pre[i]);
        }
        for(int i=0;i<=n;i++){ // returning idx of min penalty
            if(minPen==pre[i])
                return i;
        }
        return n;
    }
};