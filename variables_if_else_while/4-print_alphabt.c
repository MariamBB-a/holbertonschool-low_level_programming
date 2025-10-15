#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in order, except p an e
 * Description: print letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
