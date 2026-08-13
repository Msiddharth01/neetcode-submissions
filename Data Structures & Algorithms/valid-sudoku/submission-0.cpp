class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> columns[9];
        unordered_set<char> boxes[9];

        for(int r=0;r<9;r++){
            for (int c =0;c<9;c++){
                if(board[r][c] == '.'){
                    continue;
                }

                char num = board[r][c];
                int box = (r/3)*3 +(c/3);

                if(rows[r].count(num) || columns[c].count(num) || boxes[box].count(num)){
                    return false;
                }

                rows[r].insert(num);
                columns[c].insert(num);
                boxes[box].insert(num);
            }
        }
        return true;
    }
};
