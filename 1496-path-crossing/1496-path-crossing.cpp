class Solution {
public:
    bool isPathCrossing(string path) {
        int n = path.size();
        vector<int> dir(2, 0);
        set<vector<int>> st;
        st.insert(dir);
        for(int i=0; i<n; i++) {
            if(path[i] == 'N') {
                dir[0]++;
            }
            else if(path[i] == 'S') {
                dir[0]--;
            }
            else if(path[i] == 'E') {
                dir[1]++;
            }
            else {
                dir[1]--;
            }
            if(st.find(dir) == st.end())
                st.insert(dir);
            else
                return true;
        }
        return false;
    }
};