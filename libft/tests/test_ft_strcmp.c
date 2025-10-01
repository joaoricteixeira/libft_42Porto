#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"  /* declares ft_strncmp */

int main(void)
{
	const char *s1[] = {
		"hello",        /* identical */
		"abc",          /* differ at last char */
		"abc",          /* shorter vs longer */
		"abcd",         /* differ at last char */
		"",             /* both empty */
		"",             /* empty vs non-empty */
		"abcdef",       /* equal for first 5, differ at 6th */
		"prefix",       /* differ late */
		"ba",           /* differ at first char */
		"\xFF"          /* extended byte */
	};

	const char *s2[] = {
		"hello",
		"abd",
		"abcd",
		"abce",
		"",
		"a",
		"abcdeg",
		"prefiX",
		"bb",
		"\xFE"
	};

	size_t nsizes[] = {
		0,  /* compare zero bytes */
		1,  /* compare first byte only */
		2,
		3,
		4,
		5,
		6,  /* >= some string lengths */
		10  /* larger than either string */
	};

	size_t pairs = sizeof(s1) / sizeof(s1[0]);
	size_t ncases = sizeof(nsizes) / sizeof(nsizes[0]);

	size_t i = 0;
	while (i < pairs)
	{
		size_t j = 0;
		while (j < ncases)
		{
			size_t n = nsizes[j];
			int std = strncmp(s1[i], s2[i], n);
			int mine = ft_strncmp(s1[i], s2[i], n);

			/* normalize std to -1/0/1 using if/else (no ternary) */
			if (std < 0)
				std = -1;
			else if (std > 0)
				std = 1;
			else
				std = 0;

			/* normalize mine to -1/0/1 */
			if (mine < 0)
				mine = -1;
			else if (mine > 0)
				mine = 1;
			else
				mine = 0;

			if (std != mine)
			{
				/* print helpful debug info then fail */
				printf("FAIL: s1=\"%s\", s2=\"%s\", n=%zu\n", s1[i], s2[i], n);
				printf("  strncmp -> %d, ft_strncmp -> %d\n", std, mine);
			}

			assert(std == mine);
			j++;
		}
		i++;
	}
	return (0);
}
