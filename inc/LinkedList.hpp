#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

struct LLNode {
    int val;
    LLNode* next;

    // contructor
    LLNode(int _val) : val(_val), next(nullptr) {}

};

void print_linked_list(LLNode* node);

#endif
