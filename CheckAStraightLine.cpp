class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int flag = 0;
        double slope = 0;
        int x0, y0;
        if(coordinates.size() <= 2)
            return true;
        for(auto v : coordinates) {
            if(flag == 0) {
                flag = 1;
                x0 = v[0];
                y0 = v[1];

            }
            else if (flag == 1) {
                flag = 2;
                slope = (double) (v[1] - y0) / (v[0] - x0);
            }
            else {
                double tempSlope = (double) (v[1] - y0) / (v[0] - x0);
                if(tempSlope != slope)
                    return false;
            }
        }

        return true;
    }
};
