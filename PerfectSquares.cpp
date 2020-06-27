
class Solution {
public:
    int numSquares(int n) {
        vector <int> dp(n + 1);
        for(int i = 1; i <= n; i++) {
            int mn = i;
            int j = 1, sq = 1;
            while(sq <= i) {
                mn = min(mn, 1 + dp[i - sq]);
                j++;
                sq = j * j;
            }
            dp[i] = mn;
        }
        return dp[n];
    }
};
