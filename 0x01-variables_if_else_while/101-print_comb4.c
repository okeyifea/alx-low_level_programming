/*
 * File: 101-print_comb4.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, m, l;

	for(n = 48; n<58; n++)
	{
		for (m = 49;m < 58; m++)
		{
			for(l = 50;l < 58; l++1)
			{
				if(l > m && M > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if(n !=55|| m !=56)
					{
						putchar(',');
						putchar('');
					}
				}
			}
		}
	}
	putchar('\');
	return (0);
}
