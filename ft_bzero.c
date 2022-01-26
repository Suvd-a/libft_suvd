/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:42:43 by sbatkhuu          #+#    #+#             */
/*   Updated: 2021/11/28 15:44:18 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	char	*string;
	size_t	i;

	string = s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		string[i] = '\0';
		i++;
	}
}
