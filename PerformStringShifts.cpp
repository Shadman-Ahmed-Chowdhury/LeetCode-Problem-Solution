class Solution {
public:
    string stringShift(string str, vector<vector<int>>& v) {
       for(int i = 0; i < v.size(); i++) {
            int a = v[i][0];
            int b = v[i][1];
            if(a == 1) {
                string newStr = "";
                for(int j = str.size() - b; j < str.size(); j++) {
                    newStr += str[j];
                }
                str.erase(str.size() - b, b);
                str = newStr + str;
            }
            else {
                string newStr = "";
                for(int j = 0; j < b; j++) {
                    newStr += str[j];
                }
                str.erase(0, b);
                str = str + newStr;
            }
        }
        return str;
    }
};
