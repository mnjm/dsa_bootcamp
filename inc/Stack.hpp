#ifndef STACK_HPP
#define STACK_HPP

#include "LinkedList.hpp"
class Stack
{
private:
    LLNode* head;
    unsigned int len;
public:
    Stack() : head(nullptr), len(0) {}
    void push(int val);
    bool pop(int* ret);
    void print();
};

#endif
