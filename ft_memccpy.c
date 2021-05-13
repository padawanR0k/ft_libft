/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:35:17 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 12:53:29 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*new_dst;
	const unsigned char *new_src;
	unsigned char		new_c;

	i = 0;
	new_dst = dst;
	new_src = src;
	new_c = c;
	while (i < n)
	{
		*(new_dst + i) = *(new_src + i);
		if (*(new_src + i) == new_c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
