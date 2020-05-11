class Solution {
public:
    int findComplement(int num) {
        long long p = log2(num) + 1;
        long long n = pow(2, p);
        int c = ~num;
        return n + c;
    }
};
