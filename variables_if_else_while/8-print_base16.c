#include <stdio.h>

/**
 * main - entry point
 * Description: prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
			num++;
	}
	while (num < 16)
	{
		putchar((num - 10) + 'a');
	num++;
	}

putchar('\n');

return (0);
}
