/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:59:19 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/17 18:26:20 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*copy;
	long long	len;
	long long	idx;

	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	idx = 0;
	if (copy)
	{
		while (s1[idx])
		{
			copy[idx] = s1[idx];
			idx++;
		}
		copy[idx] = '\0';
		return (copy);
	}
	else
		return (0);
}
