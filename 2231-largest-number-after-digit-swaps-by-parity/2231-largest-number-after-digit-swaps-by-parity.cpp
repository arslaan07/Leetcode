class Solution {
public:
    int largestInteger(int num) {
        string str=to_string(num);
        string even;
        string odd;
       
        for(int i=0;i<str.size();i++){
            if((str[i]-'0')%2==1){
                odd.push_back(str[i]);
                
            }
            else{
                even.push_back(str[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end(),greater<int>());
        string ans="";
        int j=0;
        int k=0;
        for(int i=0;i<str.size();i++){
            if((str[i]-'0')%2==1)
                ans[i]=odd[j++];
            else
                ans[i]=even[k++];   
        }   
        int result=stoi(ans);
        return result;
        
    }
};