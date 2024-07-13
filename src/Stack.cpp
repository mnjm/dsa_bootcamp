#include "Stack.hpp"

void Stack::push(int val) {
    LLNode* node = new LLNode(val);
    node->next = head;
    head = node;
    ++len;
}

bool Stack::pop(int* ret) {
    if (head == nullptr) {
        return false;
    }
    *ret = head->val;
    LLNode* prev_head = head;
    head = head->next;
    delete prev_head;
    --len;
    return true;
}

void Stack::print() {
   print_linked_list(head);
}
