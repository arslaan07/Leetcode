class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        int n = score.size();
        for(int i=0; i<n; i++) {
            pq.push({score[i], i});
        }
        vector<string> ans(n, "");
        int rank = 1;
        for(int i=0; i<n; i++) {
            pair p = pq.top();
            if(rank == 1) {
                ans[p.second] = "Gold Medal";
                rank++;
            }
            else if(rank == 2) {
                ans[p.second] = "Silver Medal";
                rank++;
            }
            else if(rank == 3) {
                ans[p.second] = "Bronze Medal";
                rank++;
            }
            else {
                ans[p.second] = to_string(rank);
                rank++;
            }
            pq.pop();
        }
        return ans;
    }
};