//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> printAntiDiagonal(vector<vector<int>> &a,int n){
	    vector<vector<int>> result(n+n);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            result[i+j].push_back(a[i][j]);
	        }
	    }
	    vector<int> ans;
	    for(int i=0;i<result.size();i++){
	        for(int j=0;j<result[i].size();j++){
	            ans.push_back(result[i][j]);
	        }
	    }
	    return ans;
	}
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
	vector<int> ans = printAntiDiagonal(A,N);
	return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends