class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size() == 0)
            return {};
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <int> result;
        vector <int> divCount(n, 1);
        vector <int> prev(n, 0);
        int retLen = 1;
        int last_idx = 0;

        for(int i = 1; i < n; i++) {
            prev[i] = i;
            for(int j = 0; j < i; j++) {
                if(nums[i] % nums[j] == 0) {
                    if(divCount[i] < divCount[j] + 1) {
                        divCount[i] = divCount[j] + 1;
                        prev[i] = j;
                    }
                }
            }
            if(divCount[i] > retLen) {
                retLen = divCount[i];
                last_idx = i;
            }

        }
        result.push_back(nums[last_idx]);
        while(last_idx != prev[last_idx]) {
            last_idx = prev[last_idx];
            result.push_back(nums[last_idx]);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
