#include <stdio.h>
/**
 * main - Prints alphabets except q and e
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 8; n++)
	{
		for (n = m + 1; m <= 9; m++)
		{
			if (n != m)
			{
				putchar(n);
				putchar(m);
				if (n == 8 && m == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
