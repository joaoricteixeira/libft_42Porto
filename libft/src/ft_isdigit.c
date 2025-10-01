/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:41:45 by joateixe          #+#    #+#             */
/*   Updated: 2025/09/30 14:41:57 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char a = '[';
	char b = '9';

	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	return (0);
}*/
