#ifndef MATCHENGINE_H
#define MATCHENGINE_H

#include "HashTable.h"
#include "BST.h"
#include <cstdint>

class MatchEngine {
    friend class GradingTester;
private:
    HashTable ht;
    BST bst;
    // You can add new private functions as you see fit!
public:
    MatchEngine();
    void addRule(int rid, uint8_t key);
    void deleteRule(int rid, uint8_t key);
    int match(uint8_t key);
};

#endif // MATCHENGINE_H
