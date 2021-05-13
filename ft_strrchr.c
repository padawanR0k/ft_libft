/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:10:00 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/13 13:15:29 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*str;
	int		idx;
	int		last_idx;

	chr = (char)c;
	str = (char *)s;
	idx = 0;
	last_idx = -1;
	while (s[idx])
	{
		if (s[idx] == chr)
			last_idx = idx;
		idx++;
	}
	if (last_idx != -1)
		return (str + last_idx);
	else if (str[idx] == chr)
		return (str + idx);
	return (0);
}
