/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:38:46 by joateixe          #+#    #+#             */
/*   Updated: 2025/10/16 10:02:17 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	n_words;
	size_t	new_word;
	size_t	i;

	n_words = 0;
	new_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && new_word == 0)
		{
			new_word = 1;
			n_words++;
		}
		else if (s[i] == c)
			new_word = 0;
		i++;
	}
	return (n_words);
}

static void	free_buffer(char **buffer, size_t words_placed)
{
	size_t	i;

	i = 0;
	while (i < words_placed)
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
}

static int	place_w(char **buffer, size_t word, const char *s, size_t word_len)
{
	buffer[word] = malloc((word_len + 1) * sizeof(char));
	if (buffer[word] == NULL)
	{
		free_buffer(buffer, word);
		return (0);
	}
	ft_strlcpy(buffer[word], s, word_len + 1);
	return (1);
}

static char	**ft_buffer(char const *s, char c, char **buffer, size_t len)
{
	size_t	i;
	size_t	word_len;
	size_t	word;

	i = 0;
	word_len = 0;
	word = 0;
	while (i <= len)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (word_len > 0)
			{
				if (!place_w(buffer, word, &s[i - word_len], word_len))
					return (NULL);
				word_len = 0;
				word++;
			}
		}
		else
			word_len++;
		i++;
	}
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**buffer;

	if (!s)
		return (NULL);
	n_words = ft_words(s, c);
	buffer = malloc((n_words + 1) * sizeof(char *));
	if (buffer == NULL)
		return (NULL);
	buffer = ft_buffer(s, c, buffer, ft_strlen(s));
	if (buffer == NULL)
		return (NULL);
	buffer[n_words] = NULL;
	return (buffer);
}
