/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:48:48 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/14 18:26:42 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_front_idx(char const *s1, char const *set)
{
	size_t	idx;

	idx = 0;
	while (s1[idx] != 0)
	{
		if (ft_strchr(set, (int)s1[idx]))
			idx++;
		else
			return (idx);
	}
	return (idx);
}

static size_t	get_back_idx(char const *s1, char const *set)
{
	size_t	len;

	len = (size_t)ft_strlen((char *)s1);
	while (len)
	{
		if (ft_strchr(set, (int)s1[len - 1]))
			len--;
		else
			return (len);
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_idx;
	size_t	end_idx;
	char	*str;
	int		len;

	if (!s1 || !set)
		return (0);
	start_idx = get_front_idx(s1, set);
	if (s1[start_idx] == 0)
		return (ft_strdup(""));
	end_idx = get_back_idx(s1, set);
	if (end_idx == 0 && start_idx > 0)
		return (ft_strdup(""));
	len = end_idx - start_idx;
	if (!len)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, (char *)s1 + start_idx, len + 1);
	return (str);
}
