class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector <string> > mp;
        for(int i = 0; i < strs.size(); i++) {
            string str;
            str = strs[i];
            string newStr = str;
            sort(newStr.begin(), newStr.end());
            mp[newStr].push_back(str);
        }
        vector <vector<string> > v;
        for(auto x : mp) {
            v.push_back(x.second);
        }
        return v;
    }
};
