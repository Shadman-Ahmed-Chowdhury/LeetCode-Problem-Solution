class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map <int, int> prefix;
        int sum = 0;
        int ans = 0;
        prefix[0] = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                sum += 1;
            }
            else
                sum += -1;
            if(prefix.find(sum) != prefix.end()) {
                ans = max(ans, i - prefix[sum]);
               // cout <<i << " " << ans << " " << prefix[sum] << " " << sum << endl;
            }
            else
                prefix[sum] = i;
        }
        return ans;
    }
};
