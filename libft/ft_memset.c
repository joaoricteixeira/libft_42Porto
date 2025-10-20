/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:11:19 by joateixe          #+#    #+#             */
/*   Updated: 2025/09/30 15:13:27 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	v;

	s = (unsigned char *)str;
	v = (unsigned char)c;
	while (n--)
		*s++ = v;
	return (str);
}

/* memset -> function fills the first n bytes of memory area pointed
* to by str with the constant byte c, */
