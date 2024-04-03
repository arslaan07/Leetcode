class Solution {
public:
    bool Search(vector<vector<char>> &board, string word,int m,int n,int i,int j,int k) {
        // base case
        if(k == word.size())
            return true;
        if(i<0 || j<0 || i==m || j==n || board[i][j]!=word[k] || board[i][j] == '#')
            return false;
        
        // recursive case
        char ch = board[i][j];
        board[i][j] = '#';
        bool op1=Search(board,word,m,n,i-1,j,k+1);
        bool op2=Search(board,word,m,n,i+1,j,k+1);
        bool op3=Search(board,word,m,n,i,j-1,k+1);
        bool op4=Search(board,word,m,n,i,j+1,k+1);
        board[i][j] = ch;
        return op1 || op2 || op3 || op4;
        
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        int k = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j] == word[k]) {
                    bool z = Search(board, word, m, n, i, j, k);
                    if(z) return true;
                }
            }
        }
        return false;
    }
};