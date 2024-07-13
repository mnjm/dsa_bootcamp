#include "LLQueue.hpp"

Queue::Queue() {
    len = 0;
    head = tail = nullptr;
}

void Queue::enqueue(int val) {
    LLNode* node = new LLNode();
    node->val = val;
    node->next = nullptr;
    if (head == nullptr) {
        head = tail = node;
    } else {
        tail->next = node;
        tail = node;
    }
    ++len;
    return;
}

bool Queue::dequeue(int* ret) {
    if (head == nullptr) {
        *ret = -1;
        return false;
    }
    *ret = head->val;
    LLNode* prev_head = head;
    head = head->next;
    delete prev_head;
    --len;
    return true;
}
