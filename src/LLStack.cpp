#include "LLStack.hpp"

Stack::Stack() {
    len = 0;
    head = nullptr;
}

void Stack::push(int val) {
    LLNode* node = new LLNode;
    node->val = val;
    node->next = head;
    head = node;
    ++len;
}

bool Stack::pop(int* ret) {
    if (head == nullptr) {
        *ret = -1;
        return false;
    }
    LLNode* prev_head = head;
    head = head->next;
    *ret = prev_head->val;
    delete prev_head;
    --len;
    return true;
}
