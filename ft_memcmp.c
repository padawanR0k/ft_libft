/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:22:54 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 13:11:02 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*c1;
	unsigned char	*c2;
	int				diff;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	idx = 0;
	while (idx < n)
	{
		diff = (*(c1 + idx) - *(c2 + idx));
		if (diff != 0)
			return (diff);
		idx++;
	}
	return (0);
}
