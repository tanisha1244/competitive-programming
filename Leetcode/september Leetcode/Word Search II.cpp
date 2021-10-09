class Solution {
public:
   bool solve(vector<vector<char>> &board, string &word, int i, int j, int k, vector<vector<bool>> &visited) {
        if(k == word.length())
            return true;
        
        if(i<0 || i==board.size() || j<0 || j==board[0].size() || board[i][j] != word[k] || visited[i][j])
            return false;
        
        visited[i][j] = true;
        bool l = solve(board, word, i, j-1, k+1, visited);
        bool r = solve(board, word, i, j+1, k+1, visited);
        bool t = solve(board, word, i-1, j, k+1, visited);
        bool b = solve(board, word, i+1, j, k+1, visited);
        visited[i][j] = false;
        return l || r || t || b;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
                
        vector<vector<bool>>visited(board.size(), vector<bool>(board[0].size(), false));
        vector<string> res;
        
        for(auto &word : words) {
            int flag = 0;
            reverse(word.begin(), word.end());
            for (int i=0; i<board.size(); i++) {
                for (int j=0; j<board[0].size(); j++) { 
                    if(solve(board, word, i, j, 0, visited)) {
                        flag=1; break;
                    }
                }
                if(flag) break;
            }
            if(flag) {
                reverse(word.begin(), word.end());
                res.push_back(word);
            }
        }
        return res;
    }
};