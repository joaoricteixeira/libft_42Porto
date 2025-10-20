/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:28:32 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/18 20:14:17 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	char		ch;

	last = NULL;
	ch = c;
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == ch)
			last = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*The function returns a pointer to the
* last occurance of the character c in string s.
* This function returns a pointer to the 
* matched character or NULL if the character
* is not found. The terminating NULL byte is 
* considered a part of the string so that if c
* is specified as '\0', these functions return
* a pointer to the terminator. */
