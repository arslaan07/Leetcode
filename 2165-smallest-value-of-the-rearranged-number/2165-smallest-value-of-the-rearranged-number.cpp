class Solution {
public:
    static bool pComparator(int a,int b){
    string s_a=to_string(a);
    string s_b=to_string(b);
    string s_a_b=s_a + s_b;
    string s_b_a=s_b + s_a;
    if(s_a_b < s_b_a){
        return true;
    }
    return false;
}
    static bool nComparator(int a,int b){
    string s_a=to_string(a);
    string s_b=to_string(b);
    string s_a_b=s_a + s_b;
    string s_b_a=s_b + s_a;
    if(s_a_b > s_b_a){
        return true;
    }
    return false;
}
    long long smallestNumber(long long num) {
    if(num==0) return 0;
    long long temp=abs(num);
    vector<long long> v;
    while(temp){
       v.push_back(temp%10);
       temp=temp/10;
    }
    if(num>=0)
    sort(v.begin(),v.end(),pComparator);
    else
    sort(v.begin(),v.end(),nComparator);
    int j;
    if(v[0]==0){
    for(j=1;j<v.size();j++){
        if(v[j]!=0){
            swap(v[j],v[0]);
            break;
        }
    }   
    }
    long long result=0;
    for(int i=0;i<v.size();i++){
        result=result*10+v[i];
    }
    
    return num<0? -result : result;;
    }
};