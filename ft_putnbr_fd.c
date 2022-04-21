/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:05:20 by bdetune           #+#    #+#             */
/*   Updated: 2021/11/25 17:49:01 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unb;

	if (fd >= 0)
	{
		if (n < 0)
		{
			unb = -n;
			write(fd, "-", 1);
		}
		else
			unb = n;
		if (unb >= 10)
		{
			ft_putnbr_fd((unb / 10), fd);
			ft_putnbr_fd((unb % 10), fd);
		}
		else
		{
			unb = unb + '0';
			write(fd, &unb, 1);
		}
	}
}
