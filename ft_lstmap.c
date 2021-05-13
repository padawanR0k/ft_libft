/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:43:09 by yurlee            #+#    #+#             */
/*   Updated: 2021/05/10 18:11:47 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*new_elem;
	t_list	*new_lst;

	if (!lst)
		return (0);
	new_lst = 0;
	elem = lst;
	while (elem)
	{
		new_elem = ft_lstnew(f(elem->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		if (new_lst == 0)
			new_lst = new_elem;
		else
			ft_lstadd_back(&new_lst, new_elem);
		elem = elem->next;
	}
	return (new_lst);
}
