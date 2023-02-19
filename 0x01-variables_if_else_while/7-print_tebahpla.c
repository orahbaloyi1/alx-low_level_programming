#include <stdio.h>
#include <string.h>

/**
 *main - main function
 *
 *Return: Always 0 (success)
 */

int main(void)

{
	int c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}

