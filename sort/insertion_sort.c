#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

// void sort(int arr[], int arr_size) {
//     printf("Sorting array with insertion sort\n");
// 
//     // Loop through unsorted partition of the array
//     for (int i = 1; i < arr_size; i++) {
//         // Define a key that will be moved into the sorted partition
//         int key = arr[i];
//         int j = i - 1;
// 
//         // Move elements of arr[0...i-1] that are greater than the key one position ahead
//         while (key < arr[j] && j >= 0) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }


void sort(int arr[], int arr_size) {
    printf("Sorting array with insertion sort\n");

    // Loop through unsorted partition of the array
    for (int i = 1; i < arr_size; i++) {
        int j = i;

        // Move elements of arr[0...i-1] that are greater than the key one position ahead
        while (j > 0 && arr[j] < arr[j - 1]) {
            swap(&arr[j], &arr[j - 1]);
            j--;
        }
    }
}
