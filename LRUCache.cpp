class LRUCache {
    list <int> ls;
    unordered_map <int, pair <int, list<int> :: iterator>> mp;
    int cache_capacity;
public:
    LRUCache(int capacity) {
        cache_capacity = capacity;
    }

    int get(int key) {
        if(mp.find(key) != mp.end()) {
            ls.erase(mp[key].second);
            ls.push_front(key);
            mp[key].second = ls.begin();
            return mp[key].first;
        }
        return -1;
    }

    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            ls.erase(mp[key].second);
            ls.push_front(key);
            mp[key] = {value, ls.begin()};
        } else {
            if(ls.size() == cache_capacity) {
                mp.erase(ls.back());
                ls.pop_back();
            }
            ls.push_front(key);
            mp[key] = {value, ls.begin()};
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
