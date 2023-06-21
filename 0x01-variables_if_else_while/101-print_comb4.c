#include <stdio.h>
/**
 * main - program that prints all different combinations of three digits
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int p;

	for (n = '0'; n  <= '7'; n++)
	{
		for (m = n + 1; m <= '8'; m++)
		{
			for (p = m + 1; p <= '9'; p++)
			{
				if (((n != m) != p))
				{
				putchar(n);
				putchar(m);
				putchar(p);
				if (n == '7' && m == '8' && p == 9)
					continue;
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
