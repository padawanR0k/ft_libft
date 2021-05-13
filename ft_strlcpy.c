/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:07:46 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/13 13:49:55 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	idx;
	unsigned int	str_size;

	if (!(dest || src))
		return (0);
	str_size = (unsigned int)ft_strlen((char *)src);
	if (dstsize == 0)
		return (str_size);
	idx = 0;
	while (idx < str_size && idx < dstsize - 1)
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (str_size);
}
