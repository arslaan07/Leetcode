class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int target = tickets[k];
        int i = 0;
        int time = 0;
        while(true) {
            i = i%n;
            if(tickets[i] > 0) {
                tickets[i]--;
                time++; 
            }
            if(tickets[k] == 0) break;
            i++;
        }
        return time;
    }
};