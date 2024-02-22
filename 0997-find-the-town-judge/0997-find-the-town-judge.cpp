class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int k = trust.size();
        if (n == 1 && k == 0) {
            return 1;
        }
        unordered_map<int, int> incoming;
        unordered_map<int, int> outgoing;
        for(int i=0; i<k; i++) {
            outgoing[trust[i][0]]++;
            incoming[trust[i][1]]++;
        }
        for(int i=0; i<k; i++) {
            if(outgoing[trust[i][1]] == 0 && incoming[trust[i][1]] == n-1)
                return trust[i][1];
        }
        return -1;
    }
};