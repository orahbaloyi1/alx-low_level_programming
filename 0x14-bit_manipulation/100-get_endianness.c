#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char *)&n;

	return (*ptr);
}
