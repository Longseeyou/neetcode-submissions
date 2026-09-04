class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        
        // inverse
        for(int i=0; i<n/2; ++i)
            for(int j=0; j<n; ++j){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n-i-1][j];
                matrix[n-i-1][j] = temp;
            }

        // transpose
        for(int i=0; i<n; ++i)
            for(int j=i; j<n; ++j){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }

    }
};
