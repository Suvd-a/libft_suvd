/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:00:01 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/19 13:12:25 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (!n || dst == src)
		return ((void *)dst);
	while (n)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return ((void *)dst);
}
