class TrieNode {
public:
    TrieNode() {
        value = 0;
        for(int i = 0; i < 26; i++)
            children[i] = NULL;
    }
    int value;
    TrieNode* children[26];
};

class Trie {
    private:
    TrieNode* root;

public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *p = root;
        int len = word.size();
        for(int i = 0; i < len; i++) {
            int index = word[i] - 'a';
            if(! p->children[index]) {
                p->children[index] = new TrieNode();
            }
            p = p->children[index];
        }
        p->value = 1;

    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *p = root;
        int len = word.size();
        for(int i = 0; i < len; i++) {
            int index = word[i] - 'a';
            if(p->children[index]) {
                p = p->children[index];
            }
            else {
                return false;
            }
        }
        if(p->value != 0)
            return true;
        else
            return false;

    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *p = root;
        int len = prefix.size();
        for(int i = 0; i < len; i++) {
            int index = prefix[i] - 'a';
            if(p->children[index]) {
                p = p->children[index];
            }
            else {
                return false;
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
