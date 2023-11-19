class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        if(k < arr[0]) return k;
        int missingNumbers = arr[n-1] - n;
        if(k > missingNumbers) {
            return arr[n-1] + (k - missingNumbers);
        }
        int start = 0;
        int end = n - 1;
        while(start <= end) {
            int m = start + (end - start >> 1);
            missingNumbers = arr[m] - (m + 1);
            if(missingNumbers < k) {
                start = m + 1;
            }
            else {
                end = m - 1;
            }
        }
        missingNumbers = arr[end] - (end + 1);
        return arr[end] + (k - missingNumbers);
    }
};