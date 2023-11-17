class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int i = 0;
        int j = n - 1;
        int boat = 0;
        while(i < j) {
            int sum = people[i] + people[j];
            if(sum <= limit) {
                boat++;
                i++;
                j--;
            }
            else {
                boat++;
                j--;
            }
        }
        if(i == j) boat++;
        return boat;
    }
};