class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int target = tickets[k];
        int time = 0;
        for(int i=0; i<n; i++) {
            if(i <= k) {
                time += min(target, tickets[i]);
            }
            else {
                time += min(target-1, tickets[i]);
            }
        }
        return time;
    }
};