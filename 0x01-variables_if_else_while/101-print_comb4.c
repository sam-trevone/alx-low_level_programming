#include <stdio.h>
/**
 * main - program that prints all different combinations of three digits
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;
	int p;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (p = n + 1; p <= '9'; p++)
			{
				if ((n != m) != p)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (m == '7' && n == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
