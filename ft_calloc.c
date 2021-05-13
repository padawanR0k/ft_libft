/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:49:15 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 15:43:46 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			mem_size;
	size_t			i;

	mem_size = count * size;
	mem = (unsigned char *)malloc(mem_size);
	if (!mem)
		return (0);
	i = 0;
	while (i < mem_size)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
