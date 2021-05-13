/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:04:00 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/04 17:18:28 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_size;
	unsigned int src_size;
	unsigned int idx;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	idx = 0;
	if (size < dest_size + 1)
		return (size + src_size);
	if (size > dest_size + 1)
	{
		while (*(src + idx) && dest_size + idx + 1 < size)
		{
			*(dest + dest_size + idx) = *(src + idx);
			idx++;
		}
	}
	*(dest + dest_size + idx) = '\0';
	return (src_size + dest_size);
}
