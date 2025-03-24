//valid sudoku
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check rows
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row_set;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (row_set.count(board[i][j])) {
                        return false;
                    }
                    row_set.insert(board[i][j]);
                }
            }
        }
        // Check columns
        for (int j = 0; j < 9; j++) {
            unordered_set<char> col_set;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    if (col_set.count(board[i][j])) {
                        return false;
                    }
                    col_set.insert(board[i][j]);
                }
            }
        }
        // Check 3x3 sub-grids
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                unordered_set<char> subgrid_set;
                for (int x = 0; x < 3; x++) {
                    for (int y = 0; y < 3; y++) {
                        if (board[i + x][j + y] != '.') {
                            if (subgrid_set.count(board[i + x][j + y])) {
                                return false;
                            }
                            subgrid_set.insert(board[i + x][j + y]);
                        }
                    }
                }
            }
        }
        return true;
    }
};





