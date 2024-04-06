class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        stack<int> st;
        unordered_set<int> removeIdx;
        for(int i=0; i<n; i++) {
            if(s[i] == '(') {
                st.push(i);
            }
            else if (s[i] == ')') {
                if(!st.empty()) {
                    st.pop();
                }
                else {
                    removeIdx.insert(i);
                }
            }
        }
        while(!st.empty()) {
            removeIdx.insert(st.top());
            st.pop();
        }
        string ans = "";
        for(int i=0; i<n; i++) {
            if(removeIdx.find(i) == removeIdx.end()) {
                ans += s[i];
            }
        }
        return ans;
    }
};