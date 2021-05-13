/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:21:27 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/07 13:26:00 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *item;

	item = (t_list *)malloc(sizeof(t_list));
	if (!item)
		return (0);
	item->content = content;
	item->next = 0;
	return (item);
}
