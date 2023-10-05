class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
    int n=a.size();
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(k<n-1 && a[k]==a[k+1]){
                k--;
                continue;
            }
            int sum=a[i]+a[j]+a[k];
            if(sum==0){
                vector<int> temp={a[i],a[j],a[k]};
                ans.push_back(temp);
                j++;
                k--;
            }
            else if(sum>0){
                k--;
            }
            else{
                j++;
            }

            
        }
        
    }
    return ans;
    }
};