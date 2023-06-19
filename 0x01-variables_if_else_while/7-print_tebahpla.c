#include <stdio.h>

/**
 * main -print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char ls;

	for (ls = 'z'; ls >= 'a'; ls--)
		putchar(ls);

	putchar('\n');

	return (0);
}
