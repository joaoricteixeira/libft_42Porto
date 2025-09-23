#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>  // for size_t
# include <stdlib.h>  // for malloc, free
# include <unistd.h>  // for write

size_t  ft_strlen(const char *s);
void    *ft_memcpy(void *dst, const void *src, size_t n);
char    *ft_strdup(const char *s);
void	*ft_bzero(void *str, unsigned int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
int		ft_isalnum(int c);
int		ft_isascii (int c);
int		ft_isprint(int c);
void	*ft_memmove(void *dest_str, const void *src_str, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
