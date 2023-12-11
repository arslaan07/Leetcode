class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> mpp;
        for(int i=0; i<arr.size(); i++) {
            mpp[arr[i]]++;
            if(mpp[arr[i]] > arr.size()/4)
                return arr[i];
        }
        return 0;
    }
};