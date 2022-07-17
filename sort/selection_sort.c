#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

void sort(int arr[], int arr_size) {
    printf("Sorting array with selection sort\n");

    // Slowly move boundary between sorted and unsorted partitions of the array
    for (int i = 0; i < arr_size - 1; i++) {
        // Select the minimum element in the unsorted partition of the array
        int min_index = i;
        for (int j = i + 1; j < arr_size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the selected minimum element to place it in sorted position
        swap(&arr[min_index], &arr[i]);
    }
}
