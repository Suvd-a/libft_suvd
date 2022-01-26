/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:41:07 by sbatkhuu          #+#    #+#             */
/*   Updated: 2021/12/13 17:51:03 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' \
		|| c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		convert;
	int		i;
	int		sign;

	sign = 1;
	convert = 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		convert = convert * 10 + str[i] - '0';
		i++;
	}
	return (sign * convert);
}
