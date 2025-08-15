#include <stdio.h>

void *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char *dest = (unsigned char *)dest_str;
	const unsigned char *src = (const unsigned char *)src_str;

	while (n--)
		*dest++ = *src++;
	return (dest_str);
}
