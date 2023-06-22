#include "main.h"
/**
 * _islower: Check if char is lower case
 * @c: Is the char to be checked
 * Return: 1 if tyhe char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
