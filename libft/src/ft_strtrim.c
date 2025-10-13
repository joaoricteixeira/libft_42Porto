/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:45:56 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/13 16:28:23 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;
	
	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		j = (sizeof(set)/4);
		printf("j: %zu\n", j);
		while (j > 0)
		{
			if (s1[i] == set[j])
			{
				printf("count: %zu\n", count);
				count++;
			}
			printf("j: %zu\n", j);
			j--;
		}
		printf("i: %zu\n", i);
		i++;
	}
	return (count);
}
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*buffer;

	return (buffer);
}*/

int	main(void)
{
	char	*str;
	char	*set;

	str = "-+------+Hello-+--++";
	set = "-+";
	printf("%d\n", start(str, set));
}
