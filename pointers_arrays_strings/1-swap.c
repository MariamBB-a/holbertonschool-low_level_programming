#include "main.h"

/**
 * main - 1 swap
 *  function that swaps the values of two integers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

	    printf("Before swap: a = %d, b = %d\n", a, b);
	    int temp = *a;
	    *a = *b;
	    *b = temp;
	    printf("After swap: a = %d, b = %d\n", a, b);

   return (0);
}
