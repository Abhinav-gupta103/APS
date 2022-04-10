class Solution {
    void hero(vector<vector<char>>& grid, int row,int col){
        if(row<0 or row>=grid.size() or col<0 or col>=grid[0].size() or grid[row][col]=='0') return;
        grid[row][col]='0';
        hero(grid,row+1,col);
        hero(grid,row-1,col);
        hero(grid,row,col+1);
        hero(grid,row,col-1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    hero(grid,i,j);
                }
            }
        }
        return ans;
    }
};