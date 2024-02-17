class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        vector<int> temp(n - 1, 0);
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int i = 0; i < n - 1; i++) {
            temp[i] = heights[i + 1] - heights[i];

            if (temp[i] > 0) {
                if (minHeap.size() < ladders) {
                    minHeap.push(temp[i]);
                } else if (!minHeap.empty() && temp[i] > minHeap.top()) {
                    bricks -= minHeap.top();
                    minHeap.pop();
                    minHeap.push(temp[i]);
                } else {
                    bricks -= temp[i];
                }

                if (bricks < 0) {
                    return i;
                }
            }
        }

        return n - 1;
    }
};
