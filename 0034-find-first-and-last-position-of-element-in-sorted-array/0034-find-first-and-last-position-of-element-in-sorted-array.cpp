class Solution {
public:
    int findFirstOccurence(vector<int>& nums, int target, int low, int high){
        int firstOccurence=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                firstOccurence=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return firstOccurence;
    }
    int findLastOccurence(vector<int>& nums, int target, int low, int high){
        int lastOccurence=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                lastOccurence=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return lastOccurence;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int a=findFirstOccurence(nums,target,0,n-1);
        int b=findLastOccurence(nums,target,0,n-1);
        vector<int> ans={a,b};
        return ans;
    }
};