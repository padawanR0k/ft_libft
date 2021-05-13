/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:07:46 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/11 12:49:28 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	idx;
	int	str_size;

	if (!(dest || src))
		return (0);
	if (size == 1)
		*(dest) = '\0';
	str_size = ft_strlen(src);
	idx = 0;
	while (idx < str_size && idx < (int)size - 1)
	{
		*(dest + idx) = *(src + idx);
		idx++;
	}
	if (size)
		*(dest + idx) = '\0';
	return (str_size);
}
