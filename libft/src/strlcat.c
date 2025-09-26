#include <stdio.h>

size_t ft_strlcat(char * dst, const char * src, size_t size)
{
	size_t dst_len = 0;
	size_t src_len = 0;
	size_t i;

	i = 0;
	//Calculate lenght of dst
	while(dst_len < size && dst[dst_len] != '\0')
		dst_len++;

	//Calculate lenght of src
	while (src[src_len] != '\0')
		src_len++;

	//If dst_len == size, there is no space to append
	if (dst_len == size)
		return size + src_len;

	//Append src to dst, but leave spave for Null terminatior
	while (i < src_len && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}

	//Null-terminated dst
	dst[dst_len + i] = '\0';

	//return the total length it tried to create
	return dst_len + src_len;
}
