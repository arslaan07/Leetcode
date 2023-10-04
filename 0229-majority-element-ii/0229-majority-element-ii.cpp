class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        map<int,int> mpp;
	for(int i=0;i<v.size();i++){
		mpp[v[i]]++;
	}
	int n=v.size();
	vector<int> ans;
	map<int,int>::iterator it;
	for(it=mpp.begin();it!=mpp.end();it++){
		if((it->second)>floor(n/3)){
			ans.push_back(it->first);
		}
	}
		return ans;
    }
};