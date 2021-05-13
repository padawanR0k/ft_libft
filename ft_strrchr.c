/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:10:00 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/07 16:31:11 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	int		idx;
	int		last_idx;

	chr = c;
	idx = 0;
	last_idx = 0;
	if (*s == chr)
		return (char *)(s);
	while (*(s + idx))
	{
		if (*(s + idx) == chr)
			last_idx = idx;
		idx++;
	}
	if (last_idx != 0)
		return (char *)(s + last_idx);
	else if (*(s + idx) == chr)
		return (char *)(s + idx);
	return (0);
}
