template<typename T>
struct LLNode {
    T val;
    LLNode* next;
};

template<typename T>
class Queue
{
private:
    LLNode<T>* head;
    LLNode<T>* tail;
    unsigned int len;
public:
    Queue();
    void enqueue(const T& val);
    bool dequeue(T* ret);
};
