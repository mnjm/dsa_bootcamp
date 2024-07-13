#include <iostream>
#include "LLQueue.hpp"

using namespace std;

inline void print_dequeue(bool ret_status, int val) {
    if (ret_status) {
        cout << "Dequeue " << val << std::endl;
    } else {
        cout << "Dequeue failed\n";
    }
}

int main(int arc, char** argv)
{
    Queue<int> q;
    int temp_val;
    bool ret_status;

    ret_status = q.dequeue(&temp_val);
    print_dequeue(ret_status, temp_val);

    for(int i=0; i < 10; ++i) {
        q.enqueue(i);
        cout << "Enqueue " << i << endl;
    }
    for (int i=0; i < 5; ++i) {
        ret_status = q.dequeue(&temp_val);
        print_dequeue(ret_status, temp_val);
    }
    for(int i=0; i < 7; ++i) {
        q.enqueue(i);
        cout << "Enqueue " << i << endl;
    }
    for (int i=0; i < 15; ++i) {
        ret_status = q.dequeue(&temp_val);
        print_dequeue(ret_status, temp_val);
    }
    return 0;
}
