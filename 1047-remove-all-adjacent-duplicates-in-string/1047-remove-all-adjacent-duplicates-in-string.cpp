class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(int i=0;s[i]!='\0';i++){
            if(i>0 && !ans.empty() && s[i]==ans.back()){
                ans.pop_back();
            }
            else{
               ans.push_back(s[i]);
            }
        }
        return ans;
    }
};