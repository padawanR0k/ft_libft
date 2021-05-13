/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:04:55 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/13 17:00:36 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_mem(char const *s, char c)
{
	int size;
	int	is_sep;

	size = 0;
	is_sep = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			size++;
			while (*s && *s != c)
				s++;
			if (*s == '\0')
				break ;
		}
	}
	return (sizeof(char *) * (size + 1));
}

static char		**free_arr(char **arr, int idx)
{
	while (idx > -1)
	{
		free(arr[idx]);
		idx--;
	}
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char		**arr;
	int			idx;
	char const	*prev_str;

	idx = 0;
	prev_str = s;
	if (s == 0 || !(arr = (char **)malloc(get_mem(s, c))))
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			prev_str = s;
			while (*s && *s != c)
				s++;
			if (!(arr[idx] = (char *)malloc(sizeof(char) * (s - prev_str + 2))))
				return (free_arr(arr, idx));
			ft_strlcpy(arr[idx], (char *)prev_str, s - prev_str + 1);
			idx++;
		}
	}
	arr[idx] = 0;
	return (arr);
}
