class Solution {
public:
//     bool check(vector<vector<string>>& paths, string s) {
//        for(int i=0; i<paths.size(); i++) {
//            if(s == paths[i][0]) {
//                return false;
//            }
//        }
//         return true;
          
//     }
    string destCity(vector<vector<string>>& paths) {
        int m = paths.size();
        unordered_map<string, int> mpp;
        unordered_set<string> st;
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