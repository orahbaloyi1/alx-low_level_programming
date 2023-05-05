#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i;

	for (i = num_bits - 1; i >= 0; i--)
	{
		if ((n & (1UL << i)) >> i)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

