class Solution {
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    
    int solve(vector<vector<int>>& grid, int x, int y, int walk){
        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]==-1) return 0;
        if(grid[x][y]==2){
            if(walk==0) return 1;
            return 0;
        }
        
        int temp = grid[x][y];
        grid[x][y]=-1;
        
        int count = 0;
        for(int i=0; i<4; ++i){
            int x1 = x+dx[i];
            int y1 = y+dy[i];
            count += solve(grid,x1,y1,walk-1);
        }
        grid[x][y]=temp;
        return count;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int sx=-1,sy=-1,walk=0;
        for(int i=0; i<row; ++i){
            for(int j=0; j<col; ++j){
                if(grid[i][j] == 1){
                    sx=i,sy=j;
                    walk++;
                }else if(grid[i][j]==0 || grid[i][j]==2){
                    walk++;
                }
            }
        }
        return solve(grid,sx,sy,walk-1);
     }
};