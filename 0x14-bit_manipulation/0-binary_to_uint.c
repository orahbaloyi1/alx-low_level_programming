#include "main.h"

/**
 * binary_to_uint - a function that  converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '0' || b[x] == '1')
		{
			val = val << 1;
			if (b[x] == '1')
				val |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (val);
}

