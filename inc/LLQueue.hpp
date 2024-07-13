struct LLNode {
    int val;
    LLNode* next;
};

class Queue
{
private:
    LLNode* head;
    LLNode* tail;
    unsigned int len;
public:
    Queue();
    void enqueue(int val);
    bool dequeue(int* ret);
};
