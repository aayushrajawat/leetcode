class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int area=0,maxarea=0;
       while(r>l){
            int width=r-l;
            int h=min(height[l],height[r]);
            int area=width*h;
            if(height[l]>height[r]) r--;
            else l++;
            maxarea=max(area,maxarea);
       }
       return maxarea;
    }
};