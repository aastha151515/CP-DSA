class NumMatrix {
private:
vector<vector<int>> pre;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        pre.resize(matrix.size()+1,vector<int>(matrix[0].size()+1,0));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                pre[i+1][j+1]=(pre[i][j+1]+matrix[i][j]+pre[i+1][j]-pre[i][j]);
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=pre[row2 + 1][col2 + 1]-pre[row1][col2 + 1]-pre[row2 + 1][col1]+pre[row1][col1];  
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna