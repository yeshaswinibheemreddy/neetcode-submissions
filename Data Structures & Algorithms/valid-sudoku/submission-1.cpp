class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,k,row,col,sq,r,c;

        //check row
        for(row=0;row<9;row++)
        {   unordered_set<char> duplicate;
            for(i=0;i<9;i++)
            {   
                if(board[row][i]=='.')continue;
                if(duplicate.count(board[row][i])) return false;
                duplicate.insert(board[row][i]);
                //cout<<board[row][i];
            }
        }

        //check column
        for(col=0;col<9;col++)
        {   unordered_set<char> duplicate;
            for(i=0;i<9;i++)
            {
                if(board[i][col]=='.')continue;
                if(duplicate.count(board[i][col])) return false;
                duplicate.insert(board[i][col]);
                //cout<<board[i][col];
            }
        }

        //check 3x3
        for(sq=0;sq<9;sq++)
        {   unordered_set<char> duplicate;
            for(i=0;i<3;i++)
            { for(j=0;j<3;j++)
                {   r=(sq/3)*3 +i;
                    c=(sq%3)*3 +j;
                    if(board[r][c]=='.')continue;
                    if(duplicate.count(board[r][c])) return false;
                    duplicate.insert(board[r][c]);
                    //cout<<board[i][col];
                }
            }
        }
        return true;
    }
};
