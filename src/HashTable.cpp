#include "HashTable.h"

HashTable::HashTable() {
    for (int i = 0; i < 16; i++) {
        table[i].valid = false;
    }
}

int HashTable::hashFunction(uint8_t key) {
    int hash = (key * key >> 6) & 0b1111; // Extract middle 4 bits of squared key which has a size of 16 bits
    return hash;
}

void HashTable::add(int rid, uint8_t key) {
    int a = hashFunction(key);
    table[a].valid = true;
    table[a].rid = rid;
    table[a].key = key;
}

void HashTable::remove(int rid, uint8_t key) {
    int i = hashFunction(key);
    if (table[i].valid && table[i].rid == rid && table[i].key == key) {
        table[i].valid = false;
    }
    
}

int HashTable::search(uint8_t key) {
    int b = hashFunction(key);
    if (table[b].valid && table[b].key == key) {
        return table[b].rid;
    } 
    else {
        return -1;
}
}

