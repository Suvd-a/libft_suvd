/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:06:38 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/19 10:58:37 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new_string;

	len = ft_strlen(s);
	new_string = (char *)malloc(len + 1 * sizeof(char));
	i = 0;
	while (i < len)
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[len] = '\0';
	return (new_string);
}
