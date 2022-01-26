/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:59:35 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/05 21:56:33 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	int			len;
	long long	n_long;

	len = 1;
	n_long = n;
	if (n_long < 0)
	{
		len++;
		n_long = n_long * (-1);
	}
	while (n_long > 9)
	{
		n_long = n_long / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long long	n_long;

	len = counter(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	n_long = n;
	str[len--] = '\0';
	if (!n)
		str[0] = '0';
	else if (n_long < 0)
	{
		n_long = n_long * (-1);
		str[0] = '-';
	}
	while (n_long)
	{
		str[len] = n_long % 10 + '0';
		len--;
		n_long = n_long / 10;
	}
	return (str);
}
