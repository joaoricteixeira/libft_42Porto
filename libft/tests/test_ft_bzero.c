#include <assert.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char buf1[100];
	char buf2[100];
	int i;
	size_t n;

	//Normal
	i = 0;
	while (i < 100)
	{
		buf1[i] = 'A';
		buf2[i] = 'A';
		i++;
	}
	bzero(buf1, 10);
	ft_bzero(buf2, 10);
	assert(memcmp(buf1, buf2, 100) == 0);

	//Zero lenght
	n = 0;
	i = 0;
	while (i < 100)
	{
		buf1[i] = 'C';
		buf2[i] = 'C';
		i++;
	}
	bzero(buf1, n);
	ft_bzero(buf2, n);
	assert(memcmp(buf1, buf2, 100) == 0);

	//Full buffer zero
	i = 0;
	while (i < 100)
	{
		buf1[i] = 'D';
		buf2[i] = 'D';
		i++;
	}
	bzero(buf1, 30);
	ft_bzero(buf2, 30);
	assert(memcmp(buf1, buf2, 100) == 0);

	//Offset Zero
		i = 0;
	while (i < 100)
	{
		buf1[i] = 'E';
		buf2[i] = 'E';
		i++;
	}
	bzero(buf1 + 50, 25);
	ft_bzero(buf2 + 50, 25);
	assert(memcmp(buf1, buf2, 100) == 0);

	return (0);
}
