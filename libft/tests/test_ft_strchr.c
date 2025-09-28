#include <assert.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

int main(void)
{
	size_t	i;
	size_t	j;

	i = 0;
	const char *strings[] = { "hello", "", 
		"banana", "abc", " sdfg123", "123 ;asd", 
		"\nsdfjlg"};

	int chars[] = {
	'h', 'e', 'o', 'x',
	'a', 'c', '\0'};

	while (i < sizeof(strings)/sizeof(strings[0]))
	{
		j = 0;
		while (j < sizeof(chars)/sizeof(chars[0]))
		{
			char *std = strchr(strings[i], chars[j]);
			char *mine = ft_strchr(strings[i], chars[j]);

			if (std != mine)
			{
				if (chars[j] >= 32 && chars[j] <= 126)
					printf("FAIL: string=\"%s\", char='%c' (int %d)\n", strings[i], chars[j], chars[j]);
				else
					printf("FAIL: string=\"%s\", char=int %d\n", strings[i], chars[j]);
				printf("strchr=%p, ft_strchr=%p\n", (void*)std, (void*)mine);
			}
			assert(std == mine);
        j++;
    }
    i++;
}
	return (0);
}
