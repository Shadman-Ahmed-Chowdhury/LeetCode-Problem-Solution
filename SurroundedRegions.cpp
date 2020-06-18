
class Solution {
    void dfs(vector<vector<char>>& board, int x, int y) {
        if(x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && board[x][y] == 'O') {
            board[x][y] = 'P';
            dfs(board, x + 1, y);
            dfs(board, x, y + 1);
            dfs(board, x - 1, y);
            dfs(board, x, y - 1);
        }
        return;
    }
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if(m == 0)
            return;
        int n = board[0].size();
        for(int i = 0; i < n; i++) {
            if(board[0][i] == 'O')
                dfs(board, 0, i);
            if(board[m - 1][i] == 'O')
                dfs(board, m - 1, i);
        }
        for(int i = 0; i < m; i++) {
            if(board[i][0] == 'O')
                dfs(board, i, 0);
            if(board[i][n - 1] == 'O')
                dfs(board, i, n - 1);
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                if(board[i][j] == 'P')
                    board[i][j] = 'O';
            }
        }

    }
};
