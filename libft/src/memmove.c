#include <stddef.h>

void *ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	unsigned char *dest = (unsigned char *)dest_str;
	const unsigned char *src = (const unsigned char *)src_str;

	if(dest < src)
	{
		while (n--)
			*dest++ = *src++;
	}
	else
	{
		dest += n;
		src += n;
		while (n--)
		{
			*(--dest) = *(--src);
		}
	}
	return (dest_str);
}
