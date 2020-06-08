class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0], cur_mx = 0;
        for(int i = 0; i < nums.size(); i++) {
            cur_mx += nums[i];
            if(cur_mx > mx)
                mx = cur_mx;
            if(cur_mx < 0)
                cur_mx = 0;
        }
        return mx;
    }
};
