#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <cstdint>

struct HashEntry {
    bool valid;
    uint8_t key;
    int rid;
};

class HashTable {
    friend class GradingTester;
private:
    HashEntry table[16];
    int hashFunction(uint8_t key);
    // You can add new private functions as you see fit!
public:
    HashTable();
    void add(int rid, uint8_t key);
    void remove(int rid, uint8_t key);
    int search(uint8_t key);
};

#endif // HASHTABLE_H
