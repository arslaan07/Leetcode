class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int m = paths.size();
        set<string> st;
        for(int i=0; i<m; i++) {
            st.insert(paths[i][0]);
        }
        for(int i=0; i<m; i++) {
            if(st.find(paths[i][1]) == st.end()) {
                return paths[i][1];
            }
        }
        return "";
    }
};