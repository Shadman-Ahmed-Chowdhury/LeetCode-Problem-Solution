class MinStack {
public:
    stack <int> s1;
    stack <int> s2;
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        s1.push(x);
        if(s2.empty())
            s2.push(x);
        else
            s2.push(min(s2.top(), x));
    }

    void pop() {
        s1.pop();
        s2.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return s2.top();
    }
};


