class Solution {
   public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int left = 0, right = matrix[0].size() - 1;
        int top = 0, bottom = matrix.size() - 1;
        while (left <= right&& top <= bottom) {
            // TOP
            for (int j = left; j <= right; ++j) 
                ans.push_back(matrix[top][j]);
            top++;

            // RIGHT
            for (int i = top; i <= bottom; ++i) 
                ans.push_back(matrix[i][right]);
            right--;

            // BOTTOM
            if(top <= bottom){
                for (int j = right; j >= left; --j) 
                    ans.push_back(matrix[bottom][j]);
                bottom--;
            }

            // LEFT
            if(left <= right){
                for (int i = bottom; i >= top; --i) 
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};
