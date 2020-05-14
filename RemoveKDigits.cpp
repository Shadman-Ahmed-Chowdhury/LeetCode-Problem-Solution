class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() == k)
            return "0";
        int i = 0;
        while(k > 0) {
            if(i > 0)
                i--;
            while(i < num.size() && num[i] <= num[i + 1])
                i++;
            num.erase(num.begin() + i);
            k--;
        }
        auto non_zero = num.find_first_not_of("0");
        num.erase(0, non_zero);
        cout << non_zero << endl;
        /**
        int upto = 0;
        if(num[0] == '0') {
            for(int i = 0; i < num.size(); i++) {
                if(num[i] != '0') {
                    upto = i - 1;
                }
            }
           // cout << upto << endl;
            num.erase(0, upto);
        }
        **/

        if(num.size() == 0)
            return "0";

        return num;
    }

};
