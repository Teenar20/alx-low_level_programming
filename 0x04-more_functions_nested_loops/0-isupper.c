#include "main.h"
/**
 * main - checks for lowercase character
 * @c is the character to be checked
 * Return: 1 for uppercase or 0 for any
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
