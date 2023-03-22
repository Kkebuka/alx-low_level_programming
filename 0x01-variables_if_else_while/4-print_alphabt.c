#include <stdio.h>
/**
 * main - programs that prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 lways success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)

	{
		if (n == 101 || n == 111)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

