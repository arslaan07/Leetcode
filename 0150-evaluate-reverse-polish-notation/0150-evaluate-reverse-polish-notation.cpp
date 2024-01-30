class Solution {
public:
    int Operate(int a, int b, string token) {
        if(token == "+") {
            return a+b;
        }
        else if(token == "-") {
            return a-b;
        }
        else if(token == "*") {
            return a*b;
        }
        return a/b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
               int b = st.top();
               st.pop();
               int a = st.top();
               st.pop();
               int result = Operate(a, b, token);
               st.push(result);
               }
            else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};