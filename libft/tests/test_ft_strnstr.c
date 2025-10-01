/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:42:20 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 18:43:16 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

/*
** Reference implementation of strnstr (for testing only).
*/
static char	*ref_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j]
			&& i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*big[] = {
		"hello", "", "hello", "hello", "abcabd",
		"abcabd", "foobar", "foobar", "hi", "hello"
	};
	const char	*little[] = {
		"", "a", "xyz", "hello", "abd",
		"abd", "foo", "bar", "hello", "hello"
	};
	size_t		limits[] = {5, 5, 5, 5, 6, 5, 6, 5, 5, 3};
	size_t		i;

	i = 0;
	while (i < sizeof(big) / sizeof(big[0]))
	{
		char *std = ref_strnstr(big[i], little[i], limits[i]);
		char *mine = ft_strnstr(big[i], little[i], limits[i]);
		if ((std == NULL && mine != NULL) || (std != NULL && mine == NULL)
			|| (std != NULL && mine != NULL && strcmp(std, mine) != 0))
		{
			printf("FAIL: big=\"%s\", little=\"%s\", n=%zu\n",
				big[i], little[i], limits[i]);
			if (std)
				printf("  ref_strnstr -> \"%s\"\n", std);
			else
				printf("  ref_strnstr -> NULL\n");
			if (mine)
				printf("  ft_strnstr  -> \"%s\"\n", mine);
			else
				printf("  ft_strnstr  -> NULL\n");
		}
		assert((std == NULL && mine == NULL)
			|| (std != NULL && mine != NULL && strcmp(std, mine) == 0));
		i++;
	}
	return (0);
}
