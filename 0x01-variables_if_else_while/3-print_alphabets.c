#include<stdio.h>

/**
 * main-print alphabet in lowercase and uppercase
 * followed by a new line
 *Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch) ;
	}
	char CH;

	for (CH = 'A'; CH <= 'z'; CH++)
	{
		putchar (CH);
	}
	putchar ('\n');
	return (0);
}
