/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:10:47 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/13 12:34:36 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (idx < n && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}
