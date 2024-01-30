class Solution {
public:
    unordered_map<string, function<int (int, int)>> mpp = {
        {"+", [](int a, int b) {
            return a+b;
        }},
        {"-", [](int a, int b) {
            return a-b;
        }},
        {"*", [](int a, int b) {
            return a*b;
        }},
        {"/", [](int a, int b) {
            return a/b;
        }}
    };
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
               int b = st.top();
               st.pop();
               int a = st.top();
               st.pop();
               int result = mpp[token](a, b);
               st.push(result);
               }
            else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};