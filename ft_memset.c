/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:10:02 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/04 13:58:23 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	txt;
	char			*dest;

	dest = (char *)b;
	i = 0;
	while (i < len)
	{
		txt = (unsigned char)c;
		*(dest + i) = txt;
		i++;
	}
	return (b);
}
