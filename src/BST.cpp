#include "BST.h"
#include <iostream> 

BST::BST() {
    root = new Node();
}

BST::~BST() {
    delete root;
}

void BST::add(int rid, uint8_t key) {
    Node* current = root;
    for (int i = 7; i >= 0; --i) {
        if (key & (1 << i)) {
            if (!current->right) {
                current->right = new Node();
            }
            current = current->right;
        } 
        else {
            if (!current->left) {
                current->left = new Node();
            }
            current = current->left;
        }
        current->rid = rid;
    }
}

int BST::search(uint8_t key) {
    Node* current = root;
    for (int i = 7; i >= 0; --i) {
        if (key & (1 << i)) {
            if (!current->right) {
                return -1;
            }
            current = current->right;
        } 
        else {
            if (!current->left) {
                return -1;
            }
            current = current->left;
        }
    }
    return current->rid;
    
}

void BST::remove(int rid, uint8_t key) {
    Node* current = root;
    for (int i = 7; i >= 0; --i) {
        if (key & (1 << i)) {
            if (!current->right) {
                return;
            }
            current = current->right;
        } else {
            if (!current->left) {
                return;
            }
            current = current->left;
        }
    }
    if (current->rid == rid) {
        current->rid = -1;
    }
}