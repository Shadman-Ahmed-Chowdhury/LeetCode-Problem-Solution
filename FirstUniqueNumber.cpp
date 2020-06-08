class FirstUnique {
    unordered_map <int, int> mp;
    queue <int> q;
public:

    FirstUnique(vector<int>& nums) {
        for(int n : nums)
            add(n);
    }

    int showFirstUnique() {
        while(!q.empty() && (mp[q.front()] > 1))
            q.pop();

        if(q.empty())
            return -1;

        return q.front();
    }

    void add(int value) {
        mp[value]++;
        if(mp[value] == 1)
            q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
