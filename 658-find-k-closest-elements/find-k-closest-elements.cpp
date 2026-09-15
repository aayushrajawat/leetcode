class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int> ans(k);
        if(x<arr[0]){
            for(int i=0;i<k;i++)
                ans[i]=arr[i];
            return ans;
        }
        if(x>arr[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                ans[j--]=arr[i--];
            }
            return ans;
        }

        int low=0;
        int high=n-1;
        bool flag=false; //element present or not
        int t=0; //curr idx of ans[]
        int mid=-1; 

        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==x){
                flag=true; //present
                ans[t++]=arr[mid];
                break;
            }
            else if(arr[mid]<x) low=mid+1;
            else high=mid-1;
        }
        int lb=high; //lower bound
        int ub=low; //upper bound
        if(flag==true){
            lb=mid-1;
            ub=mid+1;
        }
        while(t<k && lb>=0 && ub<n){
            int d1=abs(x-arr[lb]); //mode value with lb
            int d2=abs(x-arr[ub]);
            if(d1<=d2) ans[t++]=arr[lb--];
            else ans[t++]=arr[ub++];
        }
        if(lb<0){
            while(t<k){
                ans[t++]=arr[ub++];
            }
        }
        if(ub>=n){
            while(t<k){
                ans[t++]=arr[lb--];
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};