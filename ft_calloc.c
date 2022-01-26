/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 21:59:45 by sbatkhuu          #+#    #+#             */
/*   Updated: 2021/12/14 16:36:00 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	total_size;
	size_t	i;

	total_size = nmemb * size;
	i = 0;
	if (nmemb == 0)
	{
		return (NULL);
	}
	p = malloc(total_size);
	while (total_size)
	{
		p[i] = 0;
		i++;
		total_size--;
	}
	return ((void *)p);
}
