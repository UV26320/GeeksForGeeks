#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>> &board, int val)
{
    int n = board.size(); // Size of the Sudoku board

    for (int i = 0; i < n; ++i)
    {
        // row check
        if (board[row][i] == val)
            return false;

        // col check
        if (board[i][col] == val)
            return false;

        // sub 3*3 matrix check
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
            return false;
    }
    return true;
}

bool solve(vector<vector<int>> &board)
{
    int n = board.size();

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {

            // cell empty
            if (board[row][col] == 0)
            {
                for (int val = 1; val <= 9; ++val)
                {
                    if (isSafe(row, col, board, val))
                    {
                        board[row][col] = val;
                        // recursive call
                        bool nextSolutionPossible = solve(board);

                        if (nextSolutionPossible)
                            return true;
                        else
                        {
                            // Backtracking
                            board[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<int>> &sudoku)
{
    solve(sudoku);
    // You might want to add something here to handle the result if needed
}
