#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: Array name
 * @n: Number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
