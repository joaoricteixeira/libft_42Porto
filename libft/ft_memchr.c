/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:44:23 by joateixe          #+#    #+#             */
/*   Updated: 2025/09/30 14:46:26 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		uc;

	i = 0;
	ptr = (const unsigned char *)str;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == uc)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*the function scans the initial n bytes of memory area
* pointed to by s for the first instance of c. Both c and
* the bytes of memory area pointed by s are interpreted as
* unsigned char*/
