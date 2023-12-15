class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int m = paths.size();
        map<string, int> mpp;
        set<string> st;
        for(int i=0; i<m; i++) {
            st.insert(paths[i][0]);
            for(int j=0; j<paths[i].size(); j++) {
                mpp[paths[i][j]]++;
            }
        }
        for(auto it : mpp) {
           if(it.second == 1 && st.find(it.first) == st.end()) {
                return it.first;
           }
        }
        return "";
    }
};