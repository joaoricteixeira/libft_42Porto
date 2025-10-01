/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:26:13 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 19:26:36 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char *tests[] = {
		"",
		"a",
		"hello",
		"this is a long string for testing",
		"123 !@# abc",
		"\0hidden", // embedded null, only first byte counts
	};
	size_t	i;

	i = 0;
	while (i < sizeof(tests) / sizeof(tests[0]))
	{
		char *std = strdup(tests[i]);
		char *mine = ft_strdup(tests[i]);
		if ((std == NULL && mine != NULL) || (std != NULL && mine == NULL)
			|| (std != NULL && mine != NULL && strcmp(std, mine) != 0))
		{
			printf("FAIL: input=\"%s\"\n", tests[i]);
			if (std)
				printf("  strdup    -> \"%s\"\n", std);
			else
				printf("  strdup    -> NULL\n");
			if (mine)
				printf("  ft_strdup -> \"%s\"\n", mine);
			else
				printf("  ft_strdup -> NULL\n");
		}
		assert((std == NULL && mine == NULL)
			|| (std != NULL && mine != NULL && strcmp(std, mine) == 0));
		free(std);
		free(mine);
		i++;
	}
	return (0);
}
