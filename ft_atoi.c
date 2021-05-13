/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 10:41:25 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/11 14:26:25 by yurlee           ###   ########.fr       */
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

static	int		ft_isvalid(const char *str)
{
	int	exist_sign;
	int	exist_digit;

	exist_sign = 0;
	exist_digit = 0;
	while (*str)
	{
		if (ft_issign(*str) && (exist_sign == 1 && exist_digit == 0))
			return (0);
		else if (ft_issign(*str))
			exist_sign = 1;
		else if (ft_isdigit(*str))
			exist_digit = 1;
		else if (ft_isspace(*str))
		{
			if (exist_sign)
				return (0);
		}
		else
			return (exist_digit);
		str++;
	}
	return (1);
}

static	int		get_sign(const char *str)
{
	int sign;

	sign = 0;
	while (*str)
	{
		if (ft_issign(*str))
			return (*str == '-' ? -1 : 1);
		else if (ft_isdigit(*str))
			return (sign);
		str++;
	}
	return (sign);
}

int				ft_atoi(const char *str)
{
	unsigned long	n;
	int				sign;
	int				size;

	n = 0;
	size = 0;
	if (ft_isvalid(str) == 0 || *str == 0)
		return (0);
	sign = get_sign(str);
	while (ft_isspace(*str))
		str++;
	if (sign != 0)
		str++;
	while (*str && ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		size++;
		str++;
	}
	if (size > 19)
		return (sign == -1 ? 0 : -1);
	return (sign != 0 ? sign * (int)n : (int)n);
}
