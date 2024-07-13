#ifndef LLSTACK_HPP
#define LLSTACK_HPP

template<typename T>
struct LLNode {
    T val;
    LLNode* next;

    // Inline constructor
    LLNode(const T& _val) : val(_val), next(nullptr) {}
};

template<typename T>
class Stack
{
private:
    LLNode<T>* head;
    unsigned int len;
public:
    Stack() : head(nullptr), len(0) {}
    void push(const T& val);
    bool pop(T* ret);
};

template<typename T>
void Stack<T>::push(const T& val) {
    LLNode<T>* node = new LLNode<T>(val);
    node->next = head;
    head = node;
    ++len;
}

template<typename T>
bool Stack<T>::pop(T* ret) {
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
