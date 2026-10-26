class Solution {
    private:
    int dfs(vector<vector<int>> & grid,int r, int c, int m, int n,int k){
        if(r<0 || r>=m || c<0 || c>=n || grid[r][c] <=0) return 0;
        int totalRemiander = grid[r][c] % k;
        grid[r][c] = -1;
        totalRemiander = (totalRemiander + dfs(grid,r-1,c,m,n,k)) % k;
          totalRemiander = (totalRemiander + dfs(grid,r+1,c,m,n,k)) % k;
            totalRemiander = (totalRemiander + dfs(grid,r,c-1,m,n,k)) % k;
              totalRemiander = (totalRemiander + dfs(grid,r,c+1,m,n,k)) % k;

              return totalRemiander;
    }
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        if(grid.empty() || grid[0].empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        for(int r = 0;r<m;r++){
            for(int c = 0;c<n;c++){
                if(grid[r][c] > 0){
                    int islandremainder = dfs(grid,r,c,m,n,k);
                    if(islandremainder == 0) cnt++;
                }
            }
        }
        return cnt;
    }
};