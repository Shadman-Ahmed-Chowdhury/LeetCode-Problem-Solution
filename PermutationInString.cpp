class Solution {
public:
    bool checkInclusion(string p, string s) {
        vector <int> v1(26, 0);
        vector <int> v2(26, 0);
        if(s.size() < p.size())
            return false;
        for(int i = 0; i < p.length(); i++) {
            v1[s[i] - 'a']++;
            v2[p[i] - 'a']++;
        }
        if(v1 == v2)
            return true;

        for(int i = p.length(); i < s.length(); i++) {
            v1[s[i] - 'a']++;
            v1[s[i - p.length()] - 'a']--;
            if(v1 == v2)
                return true;
        }
        return false;
    }
};
