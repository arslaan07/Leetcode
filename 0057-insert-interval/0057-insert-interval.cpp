class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++) {
            if(intervals[i][0] > newInterval[1]) {
                // matlab newInterval piche h
                ans.push_back(newInterval);
                newInterval = intervals[i];
            }
            else if(intervals[i][1] < newInterval[0]) {
                // matlab newInterval aage h
                ans.push_back(intervals[i]);
            }
            else {
                // matlab overlapping ho rahi h
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
        }
        ans.push_back(newInterval);
        return ans;
    }
};