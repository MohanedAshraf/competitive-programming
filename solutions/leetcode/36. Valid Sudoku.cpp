class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char , bool> m;
        for(int i = 0 ; i<3 ; i++){
            for(int j = 0 ; j<3 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 0 ; i<3 ; i++){
            for(int j = 3 ; j<6 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 0 ; i<3 ; i++){
            for(int j = 6 ; j<9 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 3 ; i<6 ; i++){
            for(int j = 0 ; j<3 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 3 ; i<6 ; i++){
            for(int j = 3 ; j<6; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 3 ; i<6 ; i++){
            for(int j = 6 ; j<9 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 6 ; i<9 ; i++){
            for(int j = 0 ; j<3 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 6 ; i<9 ; i++){
            for(int j = 3 ; j<6 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 6 ; i<9 ; i++){
            for(int j = 6 ; j<9 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
        }
        m.clear();
        for(int i = 0 ; i<9 ; i++){
            for(int j = 0 ; j<9 ; j++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
            m.clear();
        }
        m.clear();
        for(int j = 0 ; j<9 ; j++){
            for(int i = 0 ; i<9 ; i++){
                if(board[i][j]== '.') continue;
                if(m[board[i][j]]) return false;
                m[board[i][j]] = 1;
            }
            m.clear();
        }
        return true;

    }
};
