#include "QuickSort.hpp"
#include <iostream>

void print_array(int* arr, size_t len) {
    for (int i=0; i < len; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[]) {
    int arr[] = { 6, 0, 2, 7, 4, 9, 5, 1, 3, 8 };
    size_t len = 10;
    std::cout << "Input:";
    print_array(arr, len);
    quick_sort(arr, 0, 9);
    std::cout << "Sorted:";
    print_array(arr, len);
    return 0;
}
