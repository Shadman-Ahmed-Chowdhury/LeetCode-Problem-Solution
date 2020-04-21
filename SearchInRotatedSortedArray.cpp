class Solution
{
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;
        int lo = 0;
        int hi = nums.size() - 1;

        while(lo < hi) {
            int mid = (lo + hi) / 2;
            if(nums[mid] > nums[hi])
                lo = mid + 1;
            else
                hi = mid;
        }

        int start = lo;

        lo = 0;
        hi = nums.size() - 1;

        if(target >= nums[start] && target <= nums[hi])
            lo = start;
        else
            hi = start - 1;

        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target) {
                hi = mid - 1;
            }
            else
                lo = mid + 1;
         }
         return -1;
    }
};
