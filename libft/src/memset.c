#include <stdio.h>
void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *s = (unsigned char *)str;
	unsigned char v = (unsigned char) c;

	while(n--)
		*s++ = v;
	return str;
}
