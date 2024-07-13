#include "LLStack.hpp"
#include <iostream>

int main(int arc, char** argv)
{
    Stack stack;
    int temp_val;
    bool ret_status;

    ret_status = stack.pop(&temp_val);
    std::cout << "Pop " << ret_status << " " << temp_val << std::endl;

    for(int i=0; i < 10; ++i) {
        stack.push(i);
        std::cout << "Push " << i << std::endl;
    }
    for (int i=0; i < 5; ++i) {
        ret_status = stack.pop(&temp_val);
        std::cout << "Pop " << ret_status << " " << temp_val << std::endl;
    }
    for(int i=0; i < 7; ++i) {
        stack.push(i);
        std::cout << "Push " << i << std::endl;
    }
    for (int i=0; i < 15; ++i) {
        ret_status = stack.pop(&temp_val);
        std::cout << "Pop " << ret_status << " " << temp_val << std::endl;
    }

    return 0;
}
