class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1;
        string t1;
        stack<char> st;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='#' && !st.empty()){
                st.pop();
            }
            else if(s[i]!='#'){
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            s1.push_back(st.top());
            st.pop();
        }
        for(int i=0;t[i]!='\0';i++){
            if(t[i]=='#' && !st.empty()){
                st.pop();
            }
            else if(t[i]!='#'){
                st.push(t[i]);
            }
        }
        while(!st.empty()){
            t1.push_back(st.top());
            st.pop();
        }
        return s1==t1;
    }
};