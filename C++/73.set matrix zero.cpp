//optimal soln//

/*class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int n = matrix.size();         // Number of rows
        int m = matrix[0].size();      // Number of columns
        int col0 = 1;                  // To keep track of the first column

        // First pass: use the first row and first column as markers
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                col0 = 0;
            }
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Second pass: use the markers to set zeroes
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Check if the first row needs to be set to zero
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Check if the first column needs to be set to zero
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};*/