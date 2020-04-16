class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> product;
        product.assign(nums.size(), 1);
        int temp = 1;

        for(int i = 0; i < nums.size(); i++) {
            product[i] = temp;
            temp *= nums[i];
        }
        temp = 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            product[i] *= temp;
            temp *= nums[i];
        }
        return product;
    }
};
