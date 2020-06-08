class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int a = text1.size();
        int b = text2.size();
        int lcs[a + 1][b + 1];

        for(int i = 0; i <= a; i++) {
            for(int j = 0; j <= b; j++) {
                if(i == 0 || j == 0)
                    lcs[i][j] = 0;
                else if(text1[i - 1] == text2[j - 1]) {
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                }
                else {
                    lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
                }
            }
        }
        return lcs[a][b];

    }
};
