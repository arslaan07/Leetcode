class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());
        int arrows = 1; // pehle balloon ko fatane k liye
        vector<int> prev = points[0];
        for(int i=1; i<n; i++) {
            vector<int> curr = points[i];
            // check if dusra balloon pehle balloon k arrow se fat sakta h kya
            if(curr[0] <= prev[1]) {
                // matlab dusra balloon fat sakta h
                // ab check karo ki kya same arrow aage ke balloon b fata sakta h kya
                prev[0] = max(prev[0], curr[0]);
                prev[1] = min(prev[1], curr[1]);
            }
            else {
                // matlab dusra balloon nhi fat sakta
                arrows++;
                prev = curr;
            }
        }
        return arrows;
    }
};