class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else{
                string currString="";
                while(st.top()!='['){
                    currString+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(currString.begin(),currString.end());
                string k="";
                while(!st.empty() && isdigit(st.top())){
                    k+=st.top();
                    st.pop();
                }
                reverse(k.begin(),k.end());
                int num=stoi(k);
                while(num!=0){
                    for(int j=0;currString[j]!='\0';j++){
                        st.push(currString[j]);
                    }
                    num--;
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};