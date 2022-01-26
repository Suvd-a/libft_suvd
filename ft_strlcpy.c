/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:14:14 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/12 15:16:31 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	n;

	srclen = ft_strlen(src);
	if (srclen + 1 < dstsize)
	{
		n = srclen + 1;
		while (n)
		{
			*dst++ = *src++;
			n--;
		}
	}
	else if (dstsize != 0)
	{
		while (dstsize - 1)
		{
			*dst++ = *src++;
			dstsize--;
		}
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
