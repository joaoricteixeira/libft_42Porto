/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:38:20 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 19:39:02 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	const char	*tests[] = {
		"",            // empty string
		"abc",         // normal string
		"abca",        // multiple occurrences
		"aaaa",        // all same
		"café",        // non-ASCII
		"\xFF\xFF\xFF",// non-printable bytes
		"abab",        // overlapping
	};
	int			chars[] = {
		'a', 'c', 'd', '\0', 0xFF, -1, 256
	};
	const char	*results;
	const char	*mine;
	size_t		i, j;

	i = 0;
	while (i < sizeof(tests)/sizeof(tests[0]))
	{
		j = 0;
		while (j < sizeof(chars)/sizeof(chars[0]))
		{
			// Skip NULL string test; undefined behavior
			if (tests[i] == NULL)
			{
				j++;
				continue;
			}

			results = strrchr(tests[i], chars[j]);
			mine = ft_strrchr(tests[i], chars[j]);

			if (results != mine)
			{
				printf("FAIL: string=\"%s\", char=%d (0x%02X)\n",
					tests[i], chars[j], (unsigned char)chars[j]);
				if (results)
					printf("  strrchr    -> offset %ld\n", results - tests[i]);
				else
					printf("  strrchr    -> NULL\n");
				if (mine)
					printf("  ft_strrchr -> offset %ld\n", mine - tests[i]);
				else
					printf("  ft_strrchr -> NULL\n");
			}

			assert(results == mine);
			j++;
		}
		i++;
	}

	// Very long string test (1MB)
	{
		char *long_str = (char *)malloc(1024 * 1024);
		size_t k;
		for (k = 0; k < 1024*1024 - 1; k++)
			long_str[k] = 'a';
		long_str[1024*1024 - 1] = '\0';

		results = strrchr(long_str, 'a');
		mine = ft_strrchr(long_str, 'a');
		assert(results == mine);

		free(long_str);
	}

	return (0);
}
