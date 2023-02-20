#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)

{
	int i;
	int j;
	int h;

	for (i = 0; i < 10; ++i)
	{
		for (j = 1; j < 10; j++)
		{
			for (h = 2; h < 10; ++h)
			{
				if (i < j && j < h)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(h + '0');
					if (i + j + h != 24)
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
