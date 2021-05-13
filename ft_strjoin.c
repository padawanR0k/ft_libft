/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:42:02 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 16:39:59 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		str_len;
	int		s1_len;
	int		s2_len;

	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	str_len = s1_len + s2_len;
	str = (char *)malloc(sizeof(char) * str_len + 1);
	if (!str)
		return (0);
	else
	{
		ft_memcpy(str, s1, s1_len);
		ft_memcpy(str + s1_len, s2, s2_len);
		str[s1_len + s2_len] = '\0';
	}
	return (str);
}
