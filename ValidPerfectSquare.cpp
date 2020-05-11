class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 1)
            return false;
        if(num == 1)
            return true;
        int lo = 1;
        int hi = num;

        long long mid;
        while(lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if(mid * mid == num)
                return true;
            else if(mid * mid > num)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return false;
    }
};
