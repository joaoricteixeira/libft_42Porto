/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:57:52 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 18:58:22 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	all_zero(const void *ptr, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	p = (const unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		if (p[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	size_t	counts[] = {0, 1, 2, 10, 100};
	size_t	sizes[] = {0, 1, 2, 4, 8};
	size_t	i;
	size_t	j;

	i = 0;
	while (i < sizeof(counts) / sizeof(counts[0]))
	{
		j = 0;
		while (j < sizeof(sizes) / sizeof(sizes[0]))
		{
			size_t total = counts[i] * sizes[j];
			void *std = calloc(counts[i], sizes[j]);
			void *mine = ft_calloc(counts[i], sizes[j]);
			if ((std == NULL && mine != NULL)
				|| (std != NULL && mine == NULL))
			{
				printf("FAIL: count=%zu size=%zu (allocation mismatch)\n",
					counts[i], sizes[j]);
			}
			else if (std && mine)
			{
				assert(all_zero(mine, total));
				assert(all_zero(std, total));
			}
			free(std);
			free(mine);
			j++;
		}
		i++;
	}
	return (0);
}
