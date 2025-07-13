#include <bits/stdc++.h>
using namespace std;

void solve(int col, int n, vector<string> &board, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, long long &ans) {
    if (col == n) {
        ans++;
        return;
    }

    for (int row = 0; row < n; row++) {
        if (leftRow[row] == 0 && upperDiagonal[n - 1 + col - row] == 0 && lowerDiagonal[row + col] == 0 && board[row][col] == '.') {
            // Place the queen
            leftRow[row] = 1;
            upperDiagonal[n - 1 + col - row] = 1;
            lowerDiagonal[col + row] = 1;
            board[row][col] = 'Q';

            // Recur to place the next queen
            solve(col + 1, n, board, leftRow, upperDiagonal, lowerDiagonal, ans);

            // Backtrack
            leftRow[row] = 0;
            upperDiagonal[n - 1 + col - row] = 0;
            lowerDiagonal[col + row] = 0;
            board[row][col] = '.';
        }
    }
}

long long solveChessBoard(vector<string> board) {
    int n = board.size();
    vector<int> leftRow(n, 0); 
    vector<int> upperDiagonal(2*n - 1, 0);
    vector<int> lowerDiagonal(2*n - 1, 0);

    // Col - 0:
    long long ans = 0;
    solve(0, n, board, leftRow, upperDiagonal, lowerDiagonal, ans);

    return ans;
}

int main()
{
    vector<string> board(8);
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }

    long long ans = solveChessBoard(board);

    cout << ans << endl;
    
    return 0;
}
// Time -> O(N!)
// Space -> O(N ^ 2)            Here N = 8