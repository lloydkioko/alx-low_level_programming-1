#include "main.h"

/**
 * print_rev - prints a string in reverse then a newline
 * @s: the used string reference pointer
 * Return: 0.
 */
void print_rev(char *s)
{
int c;
for (c = 0; s[c]  != 0; c++)
{}
for (c = c - 1; c >= 0; c--)
{
putchar(s[c]);
}
putchar('\n');
}
