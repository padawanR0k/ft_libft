/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:35:18 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 11:09:03 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(unsigned int n, int fd)
{
	int div;
	int mod;

	if (n > 9)
	{
		div = n / 10;
		mod = n % 10;
		ft_putnbr(div, fd);
		ft_putchar_fd('0' + mod, fd);
	}
	else
	{
		ft_putchar_fd('0' + n, fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	nbr = n < 0 ? -n : n;
	if (nbr == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
		ft_putnbr(nbr, fd);
	}
}
