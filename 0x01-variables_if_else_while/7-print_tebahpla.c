#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when success
 */
int main(void)
{
	int i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
