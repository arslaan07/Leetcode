class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        for(int i=1; i<=arr.size()+k; i++) {
             bool flag = false;
            for(int j=0; j<n; j++) {
                if(arr[j] == i){
                    flag = true;
                }
            }
            if(flag == false) {
                count++;
                if(count == k) {
                    return i;
                }
            }
        }
        return 0;
    }
};