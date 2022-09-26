#include <main.h>

/**
 *_memset -function that fills memory with constant byte.
 *
 *@s: area pointed.
 *@b: constant byte.
 *@n: size of byte to filled.
 *return: char
 */
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i = 0;

while (i < n)
{

*(s + 1) = b;
i += 1;
}
return (s);
}
