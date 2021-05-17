/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:07:08 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/17 19:25:48 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				idx;
	unsigned char		chr;
	const unsigned char	*str;

	idx = 0;
	str = s;
	chr = c;
	while (idx < n)
	{
		if (str[idx] == chr)
			return ((void *)(str + idx));
		idx++;
	}
	return (0);
}
