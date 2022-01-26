/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:44:28 by sbatkhuu          #+#    #+#             */
/*   Updated: 2021/12/02 19:01:50 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (s[len] != c && len != 0)
	{
		len--;
	}
	if (s[len] == c)
		return ((char *)&s[len]);
	return (0);
}
