/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:00:12 by joateixe          #+#    #+#             */
/*   Updated: 2025/09/30 16:00:15 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>  // for size_t
# include <stdlib.h>  // for malloc, free
# include <unistd.h>  // for write

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s);
void	*ft_bzero(void *str, unsigned int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memmove(void *dest_str, const void *src_str, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_atoi(const char *str);
int		ft_toupper(int str);
int		ft_tolower(int str);
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);

#endif
