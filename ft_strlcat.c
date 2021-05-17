/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:04:00 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/17 18:03:48 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t dest_size;
	size_t src_size;
	size_t idx;

	dest_size = ft_strlen((char *)dest);
	src_size = ft_strlen((char *)src);
	idx = 0;
	if (dstsize < dest_size + 1)
		return (dstsize + src_size);
	if (dstsize > dest_size + 1)
	{
		while (src[idx] && (dest_size + idx + 1) < dstsize)
		{
			dest[dest_size + idx] = src[idx];
			idx++;
		}
	}
	dest[dest_size + idx] = '\0';
	return (src_size + dest_size);
}
