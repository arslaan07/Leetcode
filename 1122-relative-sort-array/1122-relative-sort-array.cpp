class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int hash[1001]={0};
        for(int i=0;i<arr1.size();i++){
            hash[arr1[i]]++;
        }
        int x=0;
        for(int i=0;i<arr2.size();i++){
            int j=hash[arr2[i]];
            hash[arr2[i]]=0;
            for(int ii=0;ii<j;ii++){
                arr1[x++]=arr2[i];
            }
        }
        for(int i=0;i<1001;i++){
            if(hash[i]!=0){
                int j=hash[i];
                for(int ii=0;ii<j;ii++){
                    arr1[x++]=i;
                }
            }
        }
        return arr1;
    }
};