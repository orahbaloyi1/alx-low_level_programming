#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: a number
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_val;

	if (index > 63)
		return (-1);
	b_val = (n >> index) & 1;
	return (b_val);
}
