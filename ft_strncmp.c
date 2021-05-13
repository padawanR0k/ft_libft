/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:38:31 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/05 23:29:57 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
		if (diff != 0 || c1[idx] == 0 || c2[idx] == 0)
			return (diff);
		idx++;
	}
	return (0);
}
