class Solution {
public:
    bool checkValidString(string str) {
        int len = str.size();

        stack <int> open, star;
        for(int i = 0; i < len; i++) {
            if(str[i] == '(')
                open.push(i);
            else if(str[i] == '*')
                star.push(i);
            else {
                if(!open.empty())
                    open.pop();
                else if(!star.empty())
                    star.pop();
                else
                    return false;
            }
        }

        while(!open.empty()) {
            if(star.empty())
                return false;
            else if(open.top() < star.top()) {
                open.pop();
                star.pop();
            }
            else
                return false;
        }
        return true;
    }
}
