#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0
 *Description:: print single digit
 *Return: always 0 (success)
 */

int main(void)
{
	int num = 0;
	
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	
	putchar('\n');

	return (0);
}
