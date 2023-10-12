class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=1;
        int high=n-2;
        int peakIndex=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                peakIndex=mid;
                break;
            }
            else if(arr[mid]<arr[mid-1]){
                high=mid-1;
            }
            else if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }
        }
        return peakIndex;
    }
};