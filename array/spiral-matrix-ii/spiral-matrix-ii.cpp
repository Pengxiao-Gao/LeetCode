class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0)); 
        int startx = 0, starty = 0; // define the start position
        int loop = n / 2; // define the loop number
        int mid = n / 2; // define the mid position
        int count = 1; // the value to be filled in the matrix
        int offset = 1; // need to add 1 to the offset after each loop
        int i,j;
        while (loop --) {
            i = startx;
            j = starty;

            // these 4 loops are one circle of the matrix
            // from left to right
            for (j; j < n - offset; j++) {
                res[i][j] = count++;
            }
            // from top to bottom
            for (i; i < n - offset; i++) {
                res[i][j] = count++;
            }
            // from right to left
            for (; j > starty; j--) {
                res[i][j] = count++;
            }
            // from bottom to top
            for (; i > startx; i--) {
                res[i][j] = count++;
            }

            // since the 2nd loop starts from the next position, so we need to add 1 to the startx and starty
            startx++;
            starty++;

            // offset needs to add 1
            offset += 1;
        }

        // if n is odd, we need to fill the middle value
        if (n % 2) {
            res[mid][mid] = count;
        }
        return res;
    }
};