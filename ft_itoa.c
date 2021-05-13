/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:45:48 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 10:51:47 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(unsigned int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int				is_minus;
	int				len;
	char			*str;
	unsigned int	num;

	is_minus = n < 0 ? 1 : 0;
	num = n < 0 ? -n : n;
	len = get_len(num) + (is_minus ? 1 : 0);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = 0;
	len--;
	while (len > -1)
	{
		str[len] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	if (is_minus)
		str[0] = '-';
	return (str);
}
