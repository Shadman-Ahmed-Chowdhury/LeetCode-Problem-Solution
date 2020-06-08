class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector <int> nways(amount + 1);
        nways[0] = 1;
        for(int i = 0; i < coins.size(); i++) {
            int k = 0;
            for(int j = coins[i]; j <= amount; j++) {
                nways[j] = nways[j] + nways[k++];
            }
        }
        return nways[amount];
    }
};
