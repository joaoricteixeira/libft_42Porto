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

int	nlen(long n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*zero_malloc(void)
{
	char	*s;

	s = malloc(2);
	if (s == NULL)
		return (NULL);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		i;
	long	num;

	num = n;
	i = nlen(num);
	if (n == 0)
		return (zero_malloc());
	else
		buffer = malloc(i + 1);
	if (buffer == NULL)
		return (NULL);
	buffer[i] = '\0';
	if (num < 0)
	{
		buffer[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		buffer[i - 1] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (buffer);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_itoa(atoi(argv[1])));
	return (0);
}*/
