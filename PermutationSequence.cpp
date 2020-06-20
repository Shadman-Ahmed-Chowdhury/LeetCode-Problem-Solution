class Solution {
public:
    string getPermutation(int n, int k) {
        string nums = "";
        for(int i = 1; i <= n; i++) {
            string s = to_string(i);
            nums += s;
        }
        int i = 1;
        while(next_permutation(nums.begin(), nums.end())) {
            i++;
            if(i == k)
                break;
        }
        return nums;
    }
};
