/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:53:57 by sbatkhuu          #+#    #+#             */
/*   Updated: 2021/11/28 19:21:03 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	size_t			i;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
		{
			return (&string[i]);
		}
		i++;
	}
	return (0);
}
