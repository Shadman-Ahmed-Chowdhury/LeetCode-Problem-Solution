class Solution {
    int func(int n) {
        int sum = 0;
        while(n) {
            int digit = n % 10;
            n = n / 10;
            sum += (digit * digit);
        }
        return sum;
    }

public:

    bool isHappy(int n) {
        unordered_set <int> s;
        while(true) {
            if(n == 1)
                return true;

            n = func(n);
            if(s.count(n) == 1)
                return false;
            s.insert(n);
        }
    }
