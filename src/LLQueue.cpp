#include "LLQueue.hpp"

template<typename T>
void Queue<T>::enqueue(const T& val) {
    LLNode<T>* node = new LLNode<T>(val);
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

template<typename T>
bool Queue<T>::dequeue(T* ret) {
    if (head == nullptr) {
        *ret = -1;
        return false;
    }
    *ret = head->val;
    LLNode<T>* prev_head = head;
    head = head->next;
    delete prev_head;
    --len;
    return true;
}
