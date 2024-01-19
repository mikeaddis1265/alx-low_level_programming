#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: min value in array list.
 * @max: max value in array list.
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max) {
    int *arr;
    int size, i;

    if (min > max) {
        return NULL;
    }

    size = max - min + 1;
    arr = malloc(sizeof(int) * size);

    if (arr == NULL) {
        return NULL;
    }

    for (i = 0; i < size; i++) {
        arr[i] = min++;
    }

    return arr;
}
