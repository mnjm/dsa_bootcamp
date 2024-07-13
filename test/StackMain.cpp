#include "Stack.hpp"
#include <iostream>

inline void test_push(Stack& s, int val) {
    std::cout << "Pushing " << val << std::endl;
    s.push(val);
    std::cout << "Stack: ";
    s.print();
}

inline void test_pop(Stack& s) {
    int val;
    bool ret_status = s.pop(&val);
    if (ret_status) {
        std::cout << "Popped " << val << std::endl;
    } else {
        std::cout << "Pop failed\n";
    }
    std::cout << "Stack: ";
    s.print();
}

int main(int arc, char** argv)
{
    Stack stack;
    int temp_val;
    bool ret_status;

    ret_status = stack.pop(&temp_val);
    test_pop(stack);

    std::cout << std::endl;

    for(int i=0; i < 10; ++i) {
        test_push(stack, i);
    }
    std::cout << std::endl;

    for (int i=0; i < 5; ++i) {
        test_pop(stack);
    }
    std::cout << std::endl;

    for(int i=0; i < 7; ++i) {
        test_push(stack, i);
    }
    std::cout << std::endl;

    for (int i=0; i < 15; ++i) {
        test_pop(stack);
    }

    return 0;
}
