#include <stdio.h>
#include <stdbool.h>
#include "sort.h"


void sort(int arr[], int arr_size) {
    printf("Sorting array with bubble sort\n");

    for (int i = 0; i < arr_size - 1; i++) {
        int num_swaps = 0;
        // Last i elements are in sorted position
        for (int j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                num_swaps++;
            }
        }
        // If no swaps occured, the list is already sorted
        if (num_swaps == 0) break;
    }
}
