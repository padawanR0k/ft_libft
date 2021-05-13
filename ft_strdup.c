/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:59:19 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/06 14:17:28 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char		*copy;
	long long	len;
	long long	idx;

	len = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	idx = 0;
	if (copy)
	{
		while (src[idx])
		{
			copy[idx] = src[idx];
			idx++;
		}
		copy[idx] = '\0';
		return (copy);
	}
	else
		return (0);
}
