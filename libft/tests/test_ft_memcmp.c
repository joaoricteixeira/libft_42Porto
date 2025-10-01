/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:49:29 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 17:50:48 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*s1[] = {
		"hello", "abc", "abc", "abcd", "abcdX",
		"", "abc\0def", "\xFF", "\0\0\0\0"
	};
	const char	*s2[] = {
		"hello", "xbc", "axc", "abcf", "abcdY",
		"a", "abc\0xyz", "\x7F", "\0\0\0\1"
	};
	size_t		n[] = {0, 1, 3, 4, 5, 6, 7, 1, 4};
	size_t		i;

	i = 0;
	while (i < sizeof(s1) / sizeof(s1[0]))
	{
		int std = memcmp(s1[i], s2[i], n[i]);
		int mine = ft_memcmp(s1[i], s2[i], n[i]);

		if ((std < 0 && mine >= 0) || (std > 0 && mine <= 0)
			|| (std == 0 && mine != 0))
		{
			printf("FAIL: s1=\"%s\", s2=\"%s\", n=%zu\n", s1[i], s2[i], n[i]);
			printf("  memcmp=%d, ft_memcmp=%d\n", std, mine);
		}
		assert((std < 0 && mine < 0)
			|| (std > 0 && mine > 0)
			|| (std == 0 && mine == 0));
		i++;
	}
	return (0);
}
