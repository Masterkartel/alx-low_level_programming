#include<stdio.h>

/**
 * main-prints all the numbers of bas 16 in lowercase,
 * followed by a new line
 * Putchar can only be used thrice
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
