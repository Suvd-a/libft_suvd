/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbatkhuu <sbatkhuu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:02:24 by sbatkhuu          #+#    #+#             */
/*   Updated: 2022/01/04 00:35:43 by sbatkhuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)

{
	unsigned int	ui_nbr;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	ui_nbr = (unsigned int)n;
	if (ui_nbr > 9)
	{
		ft_putnbr_fd(ui_nbr / 10, fd);
	}
	ui_nbr = ui_nbr % 10 + '0';
	write (fd, &ui_nbr, 1);
}
