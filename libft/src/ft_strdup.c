/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:16:07 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 19:23:29 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;
	size_t	i;

	if (s == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	len ++;
	copy = (char *)malloc(len);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}
