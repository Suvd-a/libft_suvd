/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:04:32 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/19 12:31:23 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
	return (NULL);
}

static size_t	counter(const char *s, char c)
{
	size_t	count;
	size_t	is_word;

	is_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			count++;
			is_word = 1;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (count);
}

static size_t	word_len(char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**splitted;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = counter((char *)s, c);
	splitted = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	while (word_count--)
	{
		while (*s == c && *s != '\0')
			s++;
		splitted[i] = ft_substr((char *)s, 0, word_len((char *)s, c));
		if (!splitted[i])
			return (free_all(splitted));
		s = s + word_len((char *)s, c);
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}
