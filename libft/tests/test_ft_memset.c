#include <assert.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char buf1[100];
	char buf2[100];
	int i;
	size_t n;

	//Normal fill
	memset(buf1, 'A', 10);
	ft_memset(buf2, 'A', 10);
	assert(memcmp(buf1, buf2, 10) == 0);

	//Fill with \0
	memset(buf1, 0, 10);
	ft_memset(buf2, 0, 10);
	assert(memcmp(buf1, buf2, 10) == 0);

	//Length = 0
	n = 0;
    memset(buf1, 'A', n);
	ft_memset(buf2, 'A', n);
	assert(memcmp(buf1, buf2, 10) == 0);

	//Single-byte fill
	memset(buf1, 'A', 1);
	ft_memset(buf2, 'A', 1);
	assert(memcmp(buf1, buf2, 10) == 0);

	//Partial fill
	i = 0;
	while(i < 100)
	{
		buf1[i] = buf2[i] = 'B';
		i++;
	}
	memset(buf1, 'A', 20);
	ft_memset(buf2, 'A', 20);
	assert(memcmp(buf1, buf2, 100) == 0);

	//Non-printable
    memset(buf1, 255, 50);
    ft_memset(buf2, 255, 50);
    assert(memcmp(buf1, buf2, 30) == 0);

	//Large Fill
	memset(buf1, 'C', 100);
    ft_memset(buf2, 'C', 100);
    assert(memcmp(buf1, buf2, 100) == 0);

	return (0);
}
