struct LLNode {
    int val;
    LLNode* next;
};

class Stack
{
private:
    LLNode* head;
    unsigned int len;
public:
    Stack();
    void push(int val);
    bool pop(int* ret);
};
