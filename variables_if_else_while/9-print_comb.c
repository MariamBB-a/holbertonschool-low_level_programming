# include <stdio.h>
/**
 * main - Entry point
 * Description: Generates a random number and prints whether
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while(num <= 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}

	putchar('\n');

	return (0);
}
