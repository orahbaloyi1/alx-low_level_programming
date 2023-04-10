#include "main.h"

/**
 *binary_to_uint - A function thats converts a binary number
 *@b: pointer to the string
 *Return: unsigned value is converted
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; i++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec = 2 * dec + (b[x] - '0');
	}
	return (dec);
}
