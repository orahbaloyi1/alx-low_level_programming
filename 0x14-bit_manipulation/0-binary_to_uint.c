#include "main.h"

/**
 *binary_to_unit - converts a binary number
 *@b: pointer to the string
 *Return: converts the unsigned value
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			dec = dec << 1;
			dec += b[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (dec);
}
