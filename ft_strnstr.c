/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:41:49 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/12 15:17:34 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0)
	{
		return (hay);
	}
	while (i < len && hay[i] != '\0')
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0' \
				&& hay[i + c] == needle[c] && i + c < len)
				c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
