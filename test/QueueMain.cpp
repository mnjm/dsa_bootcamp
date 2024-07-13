#include "Queue.hpp"
#include <iostream>

inline void test_enqueue(Queue& q, int val) {
    std::cout << "Enqueuing " << val << std::endl;
    q.enqueue(val);
    std::cout << "Queue: ";
    q.print();
}

inline void test_dequeue(Queue& q){
    int val;
    bool ret_status = q.dequeue(&val);
    if (ret_status) {
        std::cout << "Dequeued " << val << std::endl;
    } else {
        std::cout << "Dequeue Failed\n";
    }
    std::cout << "Queue: ";
    q.print();
}

int main(int arc, char** argv)
{
    Queue q;
    int temp_val;
    bool ret_status;

    ret_status = q.dequeue(&temp_val);
    test_dequeue(q);

    std::cout << std::endl;

    for(int i=0; i < 10; ++i) {
        test_enqueue(q, i);
    }

    std::cout << std::endl;

    for (int i=0; i < 5; ++i) {
        test_dequeue(q);
    }

    std::cout << std::endl;

    for(int i=0; i < 7; ++i) {
        test_enqueue(q, i);
    }

    std::cout << std::endl;

    for (int i=0; i < 15; ++i) {
        test_dequeue(q);
    }
    return 0;
}
