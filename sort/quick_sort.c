#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low;
//     for (int j = low; j <= high - 1; j++) {
//         if (arr[j] < pivot) {
//             swap(&arr[i], &arr[j]);
//             i++;
//         }
//     }
//     swap(&arr[i], &arr[high]);
//     return i;
// }

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j) {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int i = partition(arr, low, high);
        quick_sort(arr, low, i - 1);
        quick_sort(arr, i + 1, high);
    }
}

void sort(int arr[], int arr_size) {
    printf("Sorting with quick sort\n");
    quick_sort(arr, 0, arr_size - 1);
}
