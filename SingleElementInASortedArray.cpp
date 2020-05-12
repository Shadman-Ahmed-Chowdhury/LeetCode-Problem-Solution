class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {
        int hi = nums.size() - 1;
        int lo = 0;
        int mid;
        while(lo <= hi) {
            if(lo == hi)
                return nums[lo];
            mid = (lo + hi) / 2;
            if(mid % 2 == 0) {
                if(nums[mid] == nums[mid + 1]) {
                    lo = mid + 2;
                }
                else {
                    hi = mid;
                }
            }
            else {
                if(nums[mid] == nums[mid - 1])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }
        return nums[mid];
    }
};
