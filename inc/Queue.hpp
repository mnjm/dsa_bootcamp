#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "LinkedList.hpp"

class Queue
{
private:
    LLNode* head;
    LLNode* tail;
    unsigned int len;
public:
    Queue() : head(nullptr), tail(nullptr), len(0) {}
    void enqueue(int val);
    bool dequeue(int* ret);
    void print();
};

#endif
