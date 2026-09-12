class Solution {
public:

   void colzero(int i, int j, vector<vector<int>>& matrix,int row,int col){
      for(int k=0;k<row;k++){
        matrix[k][j]=0;
      }
   }

   //change row
   void rowzero(int i,int j, vector<vector<int>>& matrix, int row, int col){
    for(int k=0;k<col;k++){
        matrix[i][k]=0;
    }
   }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
      //0 ke index store
     vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    ans.push_back({i,j});
                }
            }
        }

       //making zero
       for(auto it:ans){
        int r=it[0];
        int c=it[1];
        colzero(r,c,matrix,n,m);
        rowzero(r,c,matrix,n,m);
       }

   
    }
};