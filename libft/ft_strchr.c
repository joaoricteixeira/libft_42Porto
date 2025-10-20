/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:14:08 by joateixe          #+#    #+#             */
/*   Updated: 2025/09/30 15:18:53 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == uc)
			return ((char *)(str + i));
		i++;
	}
	if (uc == '\0')
		return ((char *)(str + i));
	return (NULL);
}
/*the function returns a pointer to the first
* occurence of the character in c in the string str.
* Or NULL if the character is not found. The terminated
* NULL byte is considered a part of the string so that if
* c is specified as '\0', these functions return a pointer
* to the terminator */
