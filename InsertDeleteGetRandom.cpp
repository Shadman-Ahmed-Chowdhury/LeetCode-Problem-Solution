
class RandomizedSet {
public:
    unordered_map <int, int> valueMap;
    vector <int> idx;
    /** Initialize your data structure here. */
    RandomizedSet() {
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(valueMap.count(val))
            return false;
        valueMap[val] = idx.size();
        idx.push_back(val);
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(!valueMap.count(val))
            return false;
        int index = valueMap[val];
        valueMap[idx.back()] = index;
        valueMap.erase(val);
        swap(idx[index], idx.back());
        idx.pop_back();
        return true;

    }

    /** Get a random element from the set. */
    int getRandom() {
        int index = rand() % idx.size();
        return idx[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
