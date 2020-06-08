class Solution {
    static bool cmp (const vector <int>& a, const vector <int>& b) {
        if(a[0] == b[0])
            return a[1] < b[1];
        else
            return a[0] > b[0];
    }
    public:

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector <vector <int>> result;

        sort(people.begin(), people.end(), cmp);
        for(vector <int>& v : people) {
            result.insert(result.begin() + v[1], v);
        }
        return result;
    }
};
