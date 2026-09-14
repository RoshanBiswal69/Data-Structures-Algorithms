class Solution {
    void dfs(vector<vector<int>>& image, int i , int j, int val, int Color){
        if(i<0||i>=image.size()||j<0||j>=image[0].size()||image[i][j] == Color|| image[i][j] != val) return;
        image[i][j] = Color;
        dfs(image,i+1,j,val,Color);
        dfs(image,i-1,j,val,Color);
        dfs(image,i,j+1,val,Color);
        dfs(image,i,j-1,val,Color);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int Color) {
        int val = image[sr][sc];
        dfs(image, sr, sc, val, Color);
        return image;
    }
};