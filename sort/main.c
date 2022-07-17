#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

#define MAX_ARR_SIZE 1000000

int main(void) {
    // Generate array of maximum size
    int *arr = malloc(MAX_ARR_SIZE * sizeof(int));

    // Read an array of integers from stdin
    int i = 0;
    int num;
    while (scanf("%d", &num) != EOF && i < MAX_ARR_SIZE) {
        arr[i] = num;
        i++;
    }

    // Sort and print the array
    clock_t start = clock();
    sort(arr, i);
    clock_t end = clock();
    print_arr(arr, i);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to sort: %.3lf seconds\n", time_taken);
    return 0;
}
