class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        vector<int> ans(n,0);
        bool flag=true;
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(flag==true){
                ans[i]=even[j];
                j++;
                flag=false;
            }
            else{
                ans[i]=odd[k];
                k++;
                flag=true;
            }
            
        }
        return ans;
    }
};