/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:05:10 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/10 18:42:27 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	i;

	i = 0;
	if (n == -2147483648)
	{
		write (fd, "-214", 4);
		n = 7483648;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	i = (n % 10) + '0';
	write (fd, &i, 1);
}
/*
int main(void)
{
	ft_putnbr_fd(-2147483648, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(-57, 2);
	write(1, "\n", 1);

	return (0);
}*/
