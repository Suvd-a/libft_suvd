/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:02:48 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/19 13:28:07 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*dest;
	unsigned char	*lastsrc;
	unsigned char	*lastdest;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	lastsrc = source + (len - 1);
	lastdest = dest + (len - 1);
	if (!dst && !src)
		return (NULL);
	if (dest < source)
	{
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		while (len--)
			*lastdest-- = *lastsrc--;
	}
	return (dst);
}
