#include <stdio.h>
#include "sort.h"

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void print_arr(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        printf("%d\n", arr[i]);
    }
}
