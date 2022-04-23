#include "main.h"
/**
 *_strncat - concatenates two stings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	
	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
