/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:34:17 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/01 17:47:16 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	unsigned char		ca;
	unsigned char		cb;

	a = (const unsigned char *)str1;
	b = (const unsigned char *)str2;
	while (n > 0)
	{
		ca = *a;
		cb = *b;
		if (ca != cb)
			return ((int)ca - (int)cb);
		a++;
		b++;
		n--;
	}
	return (0);
}
/*
* memcmp compares the first n bytes of memory str1 and str2
* Returns 0 if the blocks are equal (up to n bytes)
* <0 if the first differing byte in str1 is less than that in str2
* >0 if the first differing byte in str1 is greater than str2
* - It works on raw memory it does not stop at NULL
* - Str1 and Str2 initialy are void, so to ensure we only compare
*bytes we use auxiliary variables a and b */
