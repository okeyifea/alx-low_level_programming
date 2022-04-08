#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putcahr(',');
		putchar(' ');
	}

	putchar('\n');

	return(0);
}
