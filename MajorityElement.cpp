class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for(int a : nums) {
            mp[a]++;
            if(mp[a] > n / 2)
                return a;
        }
        return -1;
    }
};
