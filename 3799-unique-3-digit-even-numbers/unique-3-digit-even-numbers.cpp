class Solution {
public:
    int totalNumbers(vector<int>& arr) {
       /* int n=arr.size();
        int ans=0;
        unordered_map<int,int> m;
        for(int ele:arr) m[ele]++;
        for(int i=100;i<999;i+=2){
            int x=i;
            int a=x%10;
            x/=10;
            int b=x%10;
            x/=10;
            int c=x;
            if(m.find(a)!=m.end()){   //it contains the a
                m[a]--;
                if(m[a]==0) m.erase(a);
                if(m.find(b)!=m.end()){   //contains b
                    m[b]--;
                    if(m[b]==0) m.erase(b);
                    if(m.find(c)!=m.end()) ans++;;
                    m[b]++;
                }
                m[a]++;
            }
        }
        return ans;
        */
        int n=arr.size();
        int count[10]={0};
        
        for(int d:arr)
            count[d]++;

            int ans=0;

        for(int i=100;i<999;i+=2){
            int x=i;
            int a=x%10;
            x/=10;
            int b=x%10;
            x/=10;
            int c=x;
            if(count[a]>0){
                count[a]--;
                if(count[b]>0){
                    count[b]--;
                    if(count[c]>0){
                        ans++;
                    }
                    count[b]++;
                }
                count[a]++;
            }
        }
        return ans;
        
    }
};