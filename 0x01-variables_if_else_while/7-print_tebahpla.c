#include<stdio.h>
/**
 * main - Program that prints the alphabet in lowercase and reverse
 * Return:0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
