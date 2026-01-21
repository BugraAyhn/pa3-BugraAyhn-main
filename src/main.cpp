#include <iostream>
#include "MatchEngine.h"

int main() {
    MatchEngine engine;

    std::cout << "--- Test 1: Basic Add and Search (via BST) ---" << std::endl;
    // Add Rule 1: RID 0, Key 5 (00000101)
    engine.addRule(0, 5);
    
    // Write your test cases here to verify your design!

    return 0;
}
