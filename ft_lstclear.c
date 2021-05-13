/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:20:20 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 10:53:58 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;

	if (!(*lst))
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = next;
	}
	*lst = 0;
}
