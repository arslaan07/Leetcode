class Solution {
public:
    long long smallestNumber(long long num) {
    if(num==0) return 0;
    long long temp=abs(num);
    vector<long long> v;
    while(temp){
       v.push_back(temp%10);
       temp=temp/10;
    }
    if(num>0)
    sort(v.begin(),v.end());
    else
    sort(v.begin(),v.end(),greater<int>());
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