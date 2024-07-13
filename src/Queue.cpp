#include "Queue.hpp"

void Queue::enqueue(int val) {
    LLNode* node = new LLNode(val);
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

void Queue::print() {
   print_linked_list(head);
}
