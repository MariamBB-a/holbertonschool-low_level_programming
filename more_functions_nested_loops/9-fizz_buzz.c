#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * Description: multiplies of three print Fizz, multiples of five print Buzz, multiples of both print FizzBuzz.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		else if (i % 3 == 0 && i % 5 == 0)
                {
                        printf("FizzBuss");
                }
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n")
}
