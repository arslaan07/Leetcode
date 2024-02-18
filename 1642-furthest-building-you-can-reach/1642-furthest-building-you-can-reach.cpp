class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        priority_queue<int> pq;
        for(int i=0; i<n-1; i++) {
            if(heights[i] >= heights[i+1]) continue;
            int diff = heights[i+1] - heights[i];
            if(bricks >= diff) {
                bricks -= diff;
                pq.push(diff);
            }
            else if(ladders > 0) {
                if(!pq.empty() && pq.top() >= diff) {
                    ladders--;
                    bricks += pq.top();
                    bricks -= diff;
                    pq.pop();
                    pq.push(diff);
                }
                else {
                    ladders--;
                }
            }
            else {
                return i;
            }
        }
        return n-1;;
    }
};