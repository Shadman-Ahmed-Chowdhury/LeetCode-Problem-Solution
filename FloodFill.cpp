class Solution {
public:
    void floodFillUtil(vector <vector <int> > &image, int m, int n, int x, int y, int prevColor, int newColor) {
        if(x < 0 || x >= m || y < 0 || y >= n)
            return;
        if(image[x][y] != prevColor)
            return;
        if(image[x][y] == newColor)
            return;

        image[x][y] = newColor;
        floodFillUtil(image, m, n, x + 1, y, prevColor, newColor);
        floodFillUtil(image, m, n, x - 1, y, prevColor, newColor);
        floodFillUtil(image, m, n, x, y + 1, prevColor, newColor);
        floodFillUtil(image, m, n, x, y - 1, prevColor, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size();
        int n = image[0].size();
        //cout << m << " " << n << endl;
        int prevColor = image[sr][sc];
        floodFillUtil(image, m, n, sr, sc, prevColor, newColor);

        return image;
    }
};
