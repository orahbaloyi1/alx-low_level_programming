#include "main.h"

/**
 * binary_to_uint - A function that converted a binary number to unsigned int
 * @b: string that has the binary number
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec  = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}

	return (dec);
}

