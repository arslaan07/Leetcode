class Solution {
public:
    vector<int> printAntiDiagonal(vector<vector<int>>& a,int m,int n){
	    vector<vector<int>> result(m+n-1);
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            result[i+j].push_back(a[i][j]);
	        }
	    }
	   vector<int> ans;
	    for(int i=0;i<result.size();i++){
	        if(i%2==0){
				reverse(result[i].begin(),result[i].end());
			}
	        for(int j=0;j<result[i].size();j++){
	           ans.push_back(result[i][j]);
	        }
	    }
        return ans;
	}
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        return printAntiDiagonal(mat,m,n);
    }
};