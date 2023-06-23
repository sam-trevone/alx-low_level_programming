/*
 * File: 101-natural.c
 * Auth: Sam Trevone
 */

#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiple
 * of 3 or 5 below 1024 (excluded)
 * Return: Always 0
 */
int main(void)
{
	int i;

	sum = 0

		for (i = 0; i < 1024; i++)
		{
			if ((i % 3)  == 0 || (i % 5) == 0)
				sum += i;
		}

	printf("%d\n", sum);

	return (0);
}
