class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
    int n=a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(j>i+1 && a[j]==a[j-1]){
                continue;
            }
            int k=j+1;
            int l=n-1;
            while(k<l){
               
                long long sum=a[i];
                sum+=a[j];
                sum+=a[k];
                sum+=a[l];
                if(sum==target){
                    vector<int> temp={a[i],a[j],a[k],a[l]};
                    ans.push_back(temp);
                     k++;
                    l--;
                while(k<l && a[l]==a[l+1]){
                    l--;
                }
                while(k<l && a[k]==a[k-1]){
                    k++;
                }
                }
                else if(sum>target){
                    l--;
                }
                else{
                    k++;
                }
                
            }
        }
    }
    return ans;
    }
};