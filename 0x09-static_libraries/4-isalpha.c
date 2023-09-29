#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: chacracter to be checked
 * Return: 1 if c is a letter, 0 for any
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
