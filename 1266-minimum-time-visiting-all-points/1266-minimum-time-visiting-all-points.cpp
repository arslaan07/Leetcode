class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for(int i=1; i<points.size(); i++) {
            int maxDiff = INT_MIN;
            for(int j=0; j<points[i].size(); j++) {
                int diff = abs(points[i][j] - points[i-1][j]);
                maxDiff = max(maxDiff, diff);
                cout<<maxDiff<<" ";
            }
            time += maxDiff;
        }
        return time;
    }
};