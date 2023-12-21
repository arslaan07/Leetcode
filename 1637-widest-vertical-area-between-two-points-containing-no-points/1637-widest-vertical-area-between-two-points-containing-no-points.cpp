class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        map<int, int> mpp;
        for(int i=0; i<points.size(); i++) {
            mpp[points[i][0]]++;
        }
        if(mpp.size() == 1)  {
            return 0;
        }
        map<int, int> :: iterator it1;
        map<int, int> :: iterator it2;
        it1 = mpp.begin();
        it2 = ++mpp.begin();
        int maxDist = INT_MIN;
        while(it2 != mpp.end()) {
            int dist = it2->first - it1->first;
            maxDist = max(dist, maxDist);
            it1++;
            it2++;
        }
        return maxDist;
    }
};