class Solution {
public:
    int cnt[1001];
    int findJudge(int N, vector<vector<int>>& trust) {

        map <int, int> mp;
        for(auto v : trust) {
            mp[v[0]] = v[1];
            cnt[v[1]] += 1;
        }

        for(int i = 1; i <= N; i++) {
            //cout << mp[i] << endl;
            if(mp[i] == 0 && cnt[i] == N - 1)
                return i;
        }
        return -1;
    }
};
