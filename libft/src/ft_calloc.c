/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:50:36 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 18:55:33 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			total;
	void			*ptr;
	unsigned char	*p;
	size_t			i;

	if (nitems != 0 && size > (SIZE_MAX / nitems))
		return (NULL);
	total = nitems * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	p = (unsigned char *)ptr;
	i = 0;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
