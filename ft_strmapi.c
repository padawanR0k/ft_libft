/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:34:27 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 17:01:56 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		idx;
	char	*str;

	idx = 0;
	if (s == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!str)
		return (0);
	while (s[idx])
	{
		str[idx] = f(idx, s[idx]);
		idx++;
	}
	str[idx] = 0;
	return (str);
}
