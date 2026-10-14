class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols,sq;

        for(int i=0;i<9;i++)//rows
        {
            for(int j=0;j<9;j++)//col
            {
                if(board[i][j]=='.')continue;
                if (rows[i].count(board[i][j])|| 
                    cols[j].count(board[i][j]) ||
                    sq[(i/3)*3 + (j/3)].count(board[i][j]))
                    return false;
                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                sq[(i/3)*3 + (j/3)].insert(board[i][j]);
                
            }
        }
        return true;
        
    }
};
