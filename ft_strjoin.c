/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:30:32 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/19 10:58:56 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(len + 1 * sizeof(char));
	i = 0;
	while (*s1)
	{
		new_str[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		new_str[i] = *s2++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
