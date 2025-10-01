/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:59:54 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 18:21:25 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0'
			&& i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
* big is the string we search in
* little is the substring we look for
* len is the maximum number of char of big we are allowed to check
* It will return the first character in big where the little starts or 
* NULL if no match is found
* Outer loop:
* i is the index inside big.
* We keep going while:
* The character at big[i] is not the end-of-string ('\0'), and
* We haven’t gone past the maximum length len.
* So this loop scans each possible starting position in haystack
* Inner loop:
* j is the index inside needle.
* This loop checks character by character whether the substring 
* little matches starting at big[i].
* The loop continues as long as:
* We’re not past the end of big.
* We’re not past the end of little.
* We’re still inside the allowed length len.
* Characters match (big[i+j] == little[j]) */
