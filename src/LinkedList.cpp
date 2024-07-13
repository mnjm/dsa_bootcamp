#include "LinkedList.hpp"
#include <iostream>

void print_linked_list(LLNode* node) {
    while (nullptr != node) {
        std::cout << " " << node->val << " ->";
        node = node->next;
    }
    std::cout << " NULL\n";
}
