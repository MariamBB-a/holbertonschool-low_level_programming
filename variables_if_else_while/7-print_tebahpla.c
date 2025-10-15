#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the lowercase alphabet in reverse followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
