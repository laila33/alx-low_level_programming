#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{ int n;
char d;
for (n = 0 ; n < 10 ; n++)
	putchar((n % 10) + '0');
for (d = 'a' ; d <= 'f' ; d++)
	putchar(d);
return (0);
}
