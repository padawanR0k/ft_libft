/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:19:25 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/13 16:24:36 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_len;
	size_t	size;

	if (!s)
		return (0);
	size = 0;
	while (s[size] != '\0' && size < len)
		size++;
	str = (char *)malloc(size * sizeof(char) + 1);
	if (!str)
		return (0);
	str_len = (size_t)ft_strlen((char *)(s));
	if (str_len <= start)
	{
		str[0] = 0;
		return (str);
	}
	ft_strlcpy(str, (char *)s + start, len + 1);
	return (str);
}
