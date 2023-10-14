class Solution {
public:
    long long smallestNumber(long long num) {
    if(num==0) return 0;
    string s=to_string(num);
    if(num>0)
    sort(s.begin(), s.end());
    else
    sort(s.begin(), s.end(),greater<int>());
    if(s[0]=='0'){
        int j;
    for(j=1;j<s.size();j++){
        if(s[j]!='0'){
            swap(s[j],s[0]);
            break;
        }
    }   
    }
    long long result=stoll(s);
    return num<0? -1LL*result : result;
    }
};