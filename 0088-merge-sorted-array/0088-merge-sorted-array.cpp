class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
    int i=m-1;
	int j=n-1;
	int k=m+n-1;
	a.resize(k + 1);
	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			k--;
			i--;
		}
		else{
			a[k]=b[j];
			k--;
			j--;
		}
	}
	while(j>=0){
		a[k]=b[j];
		k--;
		j--;
	}
	return;
    }
};