#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<char, int> rows;
        unordered_map<char, int> cols;

        int colsL = board[0].size();
        int rowsL = board.size();

        // Mapping over all rows
        for (int i = 0; i < colsL; i++)
        {
            for (int j = 0; j < rowsL; j++)
            {
                if (board[i][j] == '.')
                    continue;
                if (rows[board[i][j]])
                {
                    return false;
                }
                rows[board[i][j]] = 1;
            }
            rows.clear();
        }

        // Mapping overr all cols;
        for (int i = 0; i < colsL; i++)
        {
            for (int j = 0; j < rowsL; j++)
            {
                if (board[j][i] == '.')
                    continue;
                if (cols[board[j][i]])
                    return false;
                cols[board[j][i]] = 1;
            }
            cols.clear();
        }

        int intervals[3] = {0, 3, 6};
        int ends[3] = {2, 5, 8};
        int i = 0, j = 0;
        int boxes = 0;
        int firstInterval = 0;
        int firstIntervalCol = 0;
        map<char, char> seen;
        int countRows = 0;

        while (boxes < 9)
        {
            // the Tricks
            if (j == ends[firstInterval])
            {
                if (seen[board[i][j]])
                    return false;
                else if (!seen[board[i][j]] && board[i][j] != '.')
                {
                    seen[board[i][j]] = 1;
                }
                // here i hit the end of the row
                // check i if we were at the end of the box
                if (i == ends[firstIntervalCol])
                {
                    // here we'll switch to another box
                    boxes++;
                    if (boxes == 9)
                        break;
                    seen.clear();
                    firstInterval++;
                    j = intervals[firstInterval];
                    i = intervals[firstIntervalCol];
                    countRows++;

                    if (countRows == 3)
                    {
                        firstInterval = 0;
                        firstIntervalCol++;
                        j = firstInterval;
                        i = intervals[firstIntervalCol];
                        countRows = 0;
                    }
                }
                else if (i != ends[firstIntervalCol])
                {
                    // the end or the rows let's check it before we move onto the below
                    i++;
                    j = intervals[firstInterval];
                }
            }
            if (!seen[board[i][j]] && board[i][j] != '.')
            {
                seen[board[i][j]] = 1;
                j++;
            }
            else if (seen[board[i][j]])
                return false;
            else if (board[i][j] == '.')
                j++;
        }
        return true;
    }
};
