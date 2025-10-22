#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
    int temp;

    printf("Before swap: a = %d, b = %d\n", *a, *b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("After swap: a = %d, b = %d\n", *a, *b);
}
