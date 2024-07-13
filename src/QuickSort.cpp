#include "QuickSort.hpp"

int partition(int* arr, int lo, int hi) {
    int pivot = arr[hi];
    int idx = lo - 1;
    int temp;
    for (int i=lo; i < hi; ++i) {
        if ( arr[i] < pivot ) {
            temp = arr[++idx];
            arr[idx] = arr[i];
            arr[i] = temp;
        }
    }
    temp = arr[++idx];
    arr[idx] = pivot;
    arr[hi] = temp;

    return idx;
}

void quick_sort(int* arr, int lo, int hi) {
    if (lo >= hi) {
        return;
    }

    int pivotIdx = partition(arr, lo, hi);
    quick_sort(arr, lo, pivotIdx-1);
    quick_sort(arr, pivotIdx+1, hi);
}
