#include "main.h"
/**
 *_strcpy - copies the string pointed for to by src
 *@dest: copy to
 *@src: copy from
 *Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
