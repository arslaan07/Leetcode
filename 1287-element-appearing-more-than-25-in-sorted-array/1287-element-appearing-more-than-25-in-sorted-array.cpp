class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int cnt = 1;
        for(int i=0; i<=n-2; i++) {
            if(arr[i] == arr[i+1]) {
                cnt++;
                if(cnt > (n/4)) return arr[i];
            }
            else {
                cnt = 1;
            }
        }
        return arr[0];
    }
};