class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int maxDist = INT_MIN;
        for(int i=1; i<points.size(); i++) {
            int dist = points[i][0] - points[i-1][0];
            maxDist = max(dist, maxDist);
        }
        return maxDist;
    }
};