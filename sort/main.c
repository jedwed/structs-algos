#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

#define MAX_ARR_SIZE 100000

int main(void) {
    int *arr = malloc(MAX_ARR_SIZE * sizeof(int));
    int i = 0;
    int num;
    while (scanf("%d", &num) != EOF && i < MAX_ARR_SIZE) {
        arr[i] = num;
        i++;
    }
    sort(arr, i);
    print_arr(arr, i);
    return 0;
}
