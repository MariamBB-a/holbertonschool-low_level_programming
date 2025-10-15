#include <stdio.h>
/**
 * main - print alphabtics in reverse
 * description: alphabtics
 * return: always 0 (success)
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
