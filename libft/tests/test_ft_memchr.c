#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*cases[] = {"hello", "abc\0def", "", 
		"\xFF\x00\x7F", "same"};
	int			chars[] = {'h', 'o', '\0', 'x', 0xFF, -1};
	size_t		limits[] = {0, 1, 3, 5, 10, 20};
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	while (i < sizeof(cases) / sizeof(cases[0]))
	{
		j = 0;
		while (j < sizeof(chars) / sizeof(chars[0]))
		{
			k = 0;
			while (k < sizeof(limits) / sizeof(limits[0]))
			{
				void *std = memchr(cases[i], chars[j], limits[k]);
				void *mine = ft_memchr(cases[i], chars[j], limits[k]);
				if (std != mine)
				{
					printf("FAIL: case=\"%s\", char=%d, n=%zu\n",
						cases[i], chars[j], limits[k]);
				}
				assert(std == mine);
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
