#include "main.h"

/**
 * main - 1 swap
 *  function that swaps the values of two integers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

       	a = 98;
	b = 42;

	    printf("Before swap: a = %d, b = %d\n", a, b);
	    swap_int(&a, &b);
	    printf("After swap: a = %d, b = %d\n", a, b);

   return (0);
}
