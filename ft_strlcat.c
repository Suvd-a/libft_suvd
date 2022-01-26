/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:08:43 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/12 15:16:23 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	i = 0;
	if (dst_length < dstsize - 1 && dstsize > 0)
	{
		while (dst_length + i < dstsize - 1 && src[i])
		{
			dst[i + dst_length] = src[i];
			i++;
		}
		dst[i + dst_length] = '\0';
	}
	if (dstsize <= dst_length)
		dst_length = dstsize;
	return (dst_length + src_length);
}
