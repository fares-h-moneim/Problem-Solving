class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int check = 0; 
        vector<vector<int>> check_row(9, vector<int>(9));
        vector<vector<int>> check_col(9, vector<int>(9));
        vector<vector<int>> check_sq(9, vector<int>(9));
        
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.') {
                    int digit = board[i][j] - '0';
                    
                    if (isdigit(board[i][j]) && digit >= 1 && digit <= 9) {
                        int k = i/3*3 + j/3;
                        check_row[i][digit - 1]++;
                        check_col[j][digit - 1]++;
                        check_sq[k][digit - 1]++;
                        check += check_row[i][digit - 1] > 1 || check_col[j][digit - 1] > 1 || check_sq[k][digit - 1] > 1;
                        if (check) return false;
                    }
                }
            }
        }
        return true;
    }
};
