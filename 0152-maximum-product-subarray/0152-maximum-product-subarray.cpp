class Solution {
public:
    int maxProduct(vector<int>& arr) {
   int n=arr.size();

	int prefix =1;
	int suffix=1;
	int maxProd=INT_MIN;
	for(int i=0;i<n;i++){
		prefix=prefix*arr[i];
		suffix=suffix*arr[n-i-1];
		maxProd=max(maxProd,max(prefix,suffix));
		if(prefix==0) prefix=1;
		if(suffix==0) suffix=1;
	
	}
	return maxProd;
    }
};