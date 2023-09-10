#include<stdio.h>
/**
 * main - Program that prints the alphabet in lowercase with a new line
 * Return:0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
