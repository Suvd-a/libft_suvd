/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:57:10 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/19 13:26:02 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n != 0 && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)str1 - *(unsigned char *)str2);
	}
}
