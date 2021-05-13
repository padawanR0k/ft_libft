/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:38:18 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 12:58:23 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*new_dst;
	const unsigned char	*new_src;
	size_t				i;

	i = 0;
	new_dst = dst;
	new_src = src;
	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		while (len--)
		{
			*(new_dst + i) = *(new_src + i);
			i++;
		}
	}
	else
	{
		new_dst += len - 1;
		new_src += len - 1;
		while (len--)
			*(new_dst--) = *(new_src--);
	}
	return (dst);
}
