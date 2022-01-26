/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:01:12 by sbatkhuu          #+#    #+#             */
/*   Updated: 2021/12/17 23:44:03 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	char	nl;

	len = 0;
	nl = 10;
	while (s[len] != '\0')
	{
		len++;
	}
	write (fd, s, len);
	write (fd, &nl, 1);
}
