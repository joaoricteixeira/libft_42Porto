#include <stddef.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	const unsigned char *ptr;
	unsigned char uc;

	i = 0;
	ptr = (const unsigned char *)str;
	uc = (unsigned char)c;
	while (i < n)
	{
		if(ptr[i] == uc)
			return (void *)(ptr + i);
		i++;
	}
	return NULL;
}
