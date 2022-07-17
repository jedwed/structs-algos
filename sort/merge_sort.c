#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void merge(int arr[], int low, int middle, int high) {
    int n_items = high - low + 1;
    int *temp = malloc(n_items * sizeof(int));

    int i, j, k;
    i = low; j = middle + 1; k = 0;
    while (i <= middle && j <= high) {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else 
            temp[k++] = arr[j++];
    }
    while (i <= middle)
        temp[k++] = arr[i++];
    while (j <= high)
        temp[k++] = arr[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        arr[i] = temp[k];

    free(temp);
}

void merge_sort(int arr[], int low, int high) {
    if (low < high) {
        int middle = (low + high) / 2;
        merge_sort(arr, low, middle);
        merge_sort(arr, middle + 1, high);
        merge(arr, low, middle, high);
    }
}

void sort(int arr[], int arr_size) {
    printf("Sorting with merge sort\n");
    
    merge_sort(arr, 0, arr_size - 1);
}
