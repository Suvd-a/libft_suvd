/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:13:07 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/19 10:59:15 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		begin;
	char		*new_str;
	size_t		stop;
	size_t		i;

	begin = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	stop = ft_strlen(s1);
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	while (ft_strchr(set, s1[stop - 1]) && stop > begin)
		stop--;
	new_str = malloc((stop - begin + 1) * sizeof(char));
	while (begin < stop)
	{
		new_str[i] = s1[begin];
		i++;
		begin++;
	}
	new_str[i] = '\0';
	return (new_str);
}
