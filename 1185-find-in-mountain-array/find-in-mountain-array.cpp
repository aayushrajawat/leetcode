/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {  // refer 852
public:
    int binarysearch(int target, MountainArray &mountainArr,int l,int r,bool asc){
        while(l<=r){
            int mid=l+(r-l)/2;
            int val=mountainArr.get(mid);
            if(val==target) return mid;
            if(asc){  //ascending    left side
                if(val<target) l=mid+1;
                else r=mid-1;
            } 
            else{  //descending  right side
                if(val>target) l=mid+1;
                else r=mid-1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int low=1;
        int high=n-2;
        
        while(low<high){ //finding peak idx
            int mid=low+(high-low)/2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                low=mid+1;
            else
                high=mid;
        }
        int peak=low;

        //search in left side
        int left=binarysearch(target,mountainArr,0,peak,true); //true for ascending
        if(left!=-1) return left;

        //search in right side
        int right=binarysearch(target,mountainArr,peak,n-1,false); //false for desencding
        return right;
    }
};