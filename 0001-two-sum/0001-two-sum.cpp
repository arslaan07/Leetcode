class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end()){
                ans.push_back(mpp[more]);
                ans.push_back(i);
            }
            
                mpp[a]=i;
            
             
        }
        return ans;
    }
};