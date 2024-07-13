#ifndef LLQUEUE_HPP
#define LLQUEUE_HPP
template<typename T>
struct LLNode {
    T val;
    LLNode* next;
    // Inline constructor
    LLNode(const T& _val) : val(_val), next(nullptr) {}
};

template<typename T>
class Queue
{
private:
    LLNode<T>* head;
    LLNode<T>* tail;
    unsigned int len;
public:
    Queue() : head(nullptr), tail(nullptr), len(0) {}
    void enqueue(const T& val);
    bool dequeue(T* ret);
};

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
        return false;
    }
    *ret = head->val;
    LLNode<T>* prev_head = head;
    head = head->next;
    delete prev_head;
    --len;
    return true;
}

#endif
