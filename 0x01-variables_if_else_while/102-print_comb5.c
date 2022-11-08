#include <stdio.h>

/**
 * main - program that prints all possible combinations of
 * two two-digit
 * The numbers should range from 0 to 99
 * Numbers must be separated by ,followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: 0
 */

int main(void)
{
int i, j;
i = 48;
j = i + 1;

for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
putchar(i);
putchar(j);
{
if (i == 51 && j == 52)
continue;
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
