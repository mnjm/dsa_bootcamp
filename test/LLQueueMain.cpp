#include <iostream>
#include "LLQueue.hpp"

using namespace std;

int main(int arc, char** argv)
{
    Queue q;
    int temp_val;
    bool ret_status;

    ret_status = q.dequeue(&temp_val);
    cout << "DQ " << ret_status << " " << temp_val << endl;

    for(int i=0; i < 10; ++i) {
        q.enqueue(i);
        cout << "NQ " << i << endl;
    }
    for (int i=0; i < 5; ++i) {
        ret_status = q.dequeue(&temp_val);
        cout << "DQ " << ret_status << " " << temp_val << endl;
    }
    for(int i=0; i < 7; ++i) {
        q.enqueue(i);
        cout << "NQ " << i << endl;
    }
    for (int i=0; i < 15; ++i) {
        ret_status = q.dequeue(&temp_val);
        cout << "DQ " << ret_status << " " << temp_val << endl;
    }
    return 0;
}
