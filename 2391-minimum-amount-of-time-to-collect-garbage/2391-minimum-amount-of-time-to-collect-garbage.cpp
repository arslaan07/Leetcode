class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int timeToCollect = 0;
        for(int i=0; i<n; i++) {
            timeToCollect += garbage[i].size();
        }
        vector<int> csum(n, 0);
        for(int i=1; i<=travel.size(); i++) {
            csum[i] = csum[i-1] + travel[i-1]; 
        } 
        int timeToTravel = 0;
        int P = 0;
        int G = 0;
        int M = 0;
        for(int i=n-1; i>=0; i--) {
            for(int j=0; j<garbage[i].size(); j++) {
                if(P == 1 && G == 1 && M == 1) break;
                if(garbage[i][j]  == 'P' && P == 0) {
                    timeToTravel += csum[i];
                    P = 1;
                }
                else if(garbage[i][j]  == 'G' && G == 0) {
                    timeToTravel += csum[i];
                    G = 1;
                }
                else if(garbage[i][j]  == 'M' && M == 0) {
                    timeToTravel += csum[i];
                    M = 1;
                }
            }
        }
        return timeToCollect + timeToTravel;
    }
};