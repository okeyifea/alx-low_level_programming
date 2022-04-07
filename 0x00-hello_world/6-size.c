#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n",sizeof(char));
	printf("size of an int: %i bytes(s)\n",sizeof(int));
	printf("size of a long int: %i byte(s)\n",sizeof(long int));
	printf("size of a long long int: %i byte(s)\n",sizeof(long long int));
	printf("size of a float: %i byte(s)\n",sizeof(float));
	return (0);
}
