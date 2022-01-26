/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:39:28 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/12 15:15:24 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *arg)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	len = ft_strlen(arg) + 1;
	ptr = malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (len--)
	{
		ptr[i] = arg[i];
		i++;
	}
	return (ptr);
}
