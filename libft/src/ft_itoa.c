/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:23:42 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/10 19:46:04 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	nlen(int n)
{
	int	i;
	if (n < 0)
		i++;
	while 
	
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;
	int		sign;
	size_t	temp;

	len = 0;
	temp = n;
	while (temp > 0)
	{
		temp = temp / 10;
		len++;
	}
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	

	return (buffer);
}
