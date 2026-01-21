#include "MatchEngine.h"

MatchEngine::MatchEngine() {
    ht = HashTable();
    bst = BST();
    
}

void MatchEngine::addRule(int rid, uint8_t key) {
    ht.add(rid, key);
    bst.add(rid, key);
}

void MatchEngine::deleteRule(int rid, uint8_t key) {
    ht.remove(rid, key);
    bst.remove(rid, key);
}

int MatchEngine::match(uint8_t key) {
    int ht_result = ht.search(key);
    if (ht_result != -1) {
        return ht_result;
    } else {
        return bst.search(key);
    }
}
