/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findPeakIndex(int target, MountainArray &arr,int n){
        int low=1;
        int high=n-2;
        while(low<high){
            int mid=low+(high-low)/2;
            if(arr.get(mid)<arr.get(mid+1)){
                low=mid+1;
            }
            else {
                high=mid;
            }
        }
        return low;
        
    } 
    int searchLeftMountain(int target, MountainArray &arr,int peakIndex){
        int low=0;
        int high=peakIndex;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr.get(mid)==target){
                return mid;
            }
            else if(arr.get(mid)>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
    int searchRighMountain(int target, MountainArray &arr,int peakIndex,int n){
        int low=peakIndex+1;
        int high=n-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(arr.get(mid)==target){
                return mid;
            }
            else if(arr.get(mid)>target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
        
    }
    int findInMountainArray(int target, MountainArray &arr) {
        int n=arr.length();
        int peakIndex=findPeakIndex(target,arr,n);
        int left=searchLeftMountain(target,arr,peakIndex);
        if(left!=-1) return left;
        int right=searchRighMountain(target,arr,peakIndex,n);
        return right;
    }
};