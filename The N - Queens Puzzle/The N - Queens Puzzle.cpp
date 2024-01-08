#include <vector>
using namespace std;

void addSolution(vector<vector<int>> &board, vector<vector<int>> &ans, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    int x, y;

    // Check upper columns on this row
    for (x = 0; x < col; x++)
    {
        if (board[row][x] == 1)
            return false;
    }

    // Check upper diagonal on left side
    for (x = row, y = col; x >= 0 && y >= 0; x--, y--)
    {
        if (board[x][y] == 1)
            return false;
    }

    // Check lower diagonal on left side
    for (x = row, y = col; y >= 0 && x < n; x++, y--)
    {
        if (board[x][y] == 1)
            return false;
    }

    return true;
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    // Base case
    if (col == n)
    {
        addSolution(board, ans, n);
        return;
    }

    for (int row = 0; row < n; ++row)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 1;
            solve(col + 1, ans, board, n);
            // Backtrack - reset the position
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> nQueens(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;

    solve(0, ans, board, n);

    return ans;
}
