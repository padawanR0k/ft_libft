/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 10:41:25 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/14 10:32:18 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == '\f' || c == ' ')
		return (1);
	else
		return (0);
}

static	int		ft_issign(char c)
{
	return (c == '-' || c == '+' ? 1 : 0);
}

int				ft_atoi(const char *str)
{
	long			n;
	int				sign;
	int				size;

	n = 0;
	size = 0;
	sign = 0;
	while (ft_isspace(*str))
		str++;
	while (ft_issign(*str) && sign == 0)
	{
		sign = *str == '-' ? -1 : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		size++;
		str++;
	}
	if (size > 19)
		return (sign == -1 ? 0 : -1);
	return (sign == -1 ? -1 * n : n);
}
