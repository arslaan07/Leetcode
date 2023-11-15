class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 1) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<int> ans = intervals[0];
        vector<vector<int>> ds;  
        for(int i=1; i<intervals.size(); i++) {
            int start = ans[1];
            int end = intervals[i][0];
            int bS = ans[0];
            int aE = intervals[i][1];
            if(end <= start) {
                start = max(start, aE); 
                ans[1] = start;
            }
            else{
                ds.push_back(ans);
                ans = intervals[i];
            }  
        }
        ds.push_back(ans);
        return ds;
        
    }
};