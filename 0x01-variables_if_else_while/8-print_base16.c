#include<stdio.h>
/**
 * main - Program that prints all numbers of base 16 in lowercase
 * Return:0 (Success)
 */
int main(void)
{
	int i;
	char s;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (s = 'a' ; s <= 'f' ; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
