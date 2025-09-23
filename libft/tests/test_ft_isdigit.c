#include "libft.h"
#include <ctype.h>
#include <assert.h>
#include <stdio.h>

int main(void)
{
	int tests[] = {'0', '5', '9', 'a', 'z', 'A', 'Z', '!',
		'.', ',', '+', '-', ' ', '\t', '\n', '/', ':', EOF};
	size_t i = 0;

	while (i < sizeof(tests)/sizeof(tests[0])) //to give size of the array because of the byte size of int(4)
	{
		//This ensures that any non-zero result counts as true, matching C standard behavior.
		assert(ft_isdigit(tests[i] != 0) == isdigit(tests[i] != 0));
		i++;
	}

	return (0);
}

