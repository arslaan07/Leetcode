//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    int studentsAllocatedBooks(int *books, int n, int m, int pages) {
    int sumOfPages = 0;
    int students = 0;
    for(int i=0; i<n; i++) {
        sumOfPages += books[i];
        if(sumOfPages > pages) {
            students++;
            sumOfPages = books[i];
        } 
    }
    students++;
    return students;
}
    //Function to find minimum number of pages.
    int findPages(int books[], int n, int m) 
    {
        //code here
    if(m > n) return -1;
    int start = INT_MIN;
    int end = 0;
    for(int i=0; i<n; i++){
        start = max(start, books[i]);
        end += books[i];
    }
    int ans = -1;
    while(start <= end) {
        int mid = start + (end - start >> 1);
        int noOfStudents = studentsAllocatedBooks(books, n, m, mid);
        if(noOfStudents <= m) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends