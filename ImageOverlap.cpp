class Solution {

    int overLapOnes(vector <vector<int>>& A, vector <vector<int>> & B, int r, int c) {
        int count = 0;
        int sz = A.size();
        for(int row = 0; row < sz; row++) {
            for(int col = 0; col < sz; col++) {
                if((r + row < 0 || r + row >= sz) || (c + col < 0 || c + col >= A[0].size()))
                    continue;
                if(A[row][col] + B [row + r][col + c] == 2)
                    count++;
            }
        }

        return count;
    }
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int ans = 0;
        int sz = A.size();
        for(int row = -sz + 1; row < sz; row++) {
            for(int col = -sz + 1; col < sz; col++)
                ans = max(ans, overLapOnes(A, B, row, col));
        }
        return ans;
    }
};
