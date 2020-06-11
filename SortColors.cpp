class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector <int> count(3);
        for(int n : nums) {
            count[n]++;
        }
        nums.clear();
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < count[i]; j++) {
                nums.push_back(i);
            }
        }
    }
};
