#include <stdio.h>

/**
 *main - main function
 *
 *Return: Always 0 (success)
 */

int main(void)

{
	int n;

	for (n = 0; n < 10; ++n)
		putchar(n + '0');
	for (n = 'a'; n <= 'f'; ++n)
		putchar(n);
	putchar('\n');
	return (0);
}

