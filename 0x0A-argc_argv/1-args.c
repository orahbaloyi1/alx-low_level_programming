#include <stdio.h>
#include "main.h"
/**
 *main - main fuction
 *@argc: Arguments count, contains the number of arguments
 *@argv: Arguments vector, array of strings
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
		(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);
		return (0);
}
