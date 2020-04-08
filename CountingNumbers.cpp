class Solution {
public:
    int countElements(vector<int>& arr) {
        set <int> s;
        for(int a : arr)
            s.insert(a);
        int cnt = 0;
        for(int a : arr) {
            if(s.count(a +  1) == 1)
                cnt++;
        }
        return cnt;
    }
};
