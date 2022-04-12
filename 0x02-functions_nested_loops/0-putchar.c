#include "main.h"
/**
 * main - entry point
 * @void: no argument
 * Return: Always 0
 */
int main(void)
{
	char ermias[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		-putchar(ermias[c]);
	}
	_putchar('\n');
	return (0);
}
