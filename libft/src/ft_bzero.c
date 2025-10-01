/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:32:21 by joateixe          #+#    #+#             */
/*   Updated: 2025/09/30 14:33:52 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *str, unsigned int n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n--)
		*s++ = 0;
	return (str);
}
