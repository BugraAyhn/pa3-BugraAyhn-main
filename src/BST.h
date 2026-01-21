#ifndef BST_H
#define BST_H

#include <cstdint>

struct Node {
    Node *left;
    Node *right;
    int rid; // Only valid at leaf nodes

    Node() : left(nullptr), right(nullptr), rid(-1) {}
};

class BST {
    friend class GradingTester;
private:
    Node *root;
    // You can add new private functions as you see fit!
public:
    BST();
    ~BST(); 

    void add(int rid, uint8_t key);
    void remove(int rid, uint8_t key);
    int search(uint8_t key);
};

#endif // BST_H
