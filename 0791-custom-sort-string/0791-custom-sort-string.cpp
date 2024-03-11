class Solution {
public:
    string customSortString(string order, string s) {
        int n = order.size();
        int m = s.size();
        string pre = "";
        string suc = "";
        set<char> st;
        for(auto ch : order) {
            st.insert(ch);
        }
        for(auto ch : s) {
            if(st.find(ch) == st.end()) {
                suc += ch;
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(order[i] == s[j]) {
                    pre += s[j];
                }
            }
            
        }
        return pre+suc;
    }
};