/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 01:40:08 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/14 18:23:51 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_niddle(const char *hays,
	const char *needle, size_t len)
{
	int		idx;
	size_t	needle_len;

	idx = 0;
	needle_len = ft_strlen((char *)needle);
	while (*hays)
	{
		if (idx + needle_len > len)
			break ;
		if (ft_memcmp(needle, hays, needle_len) == 0)
			return (char *)hays;
		hays++;
		idx++;
	}
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int match_size;

	match_size = 0;
	if (!haystack && !len)
		return (0);
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	else
		return (find_niddle(haystack, needle, len));
}
