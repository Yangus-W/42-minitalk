/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:58:07 by yawang            #+#    #+#             */
/*   Updated: 2023/12/09 15:24:26 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*new_next;

	if (!f || !del)
		return (NULL);
	lst_new = NULL;
	while (lst)
	{
		new_next = ft_lstnew((*f)(lst->content));
		if (!new_next)
		{
			while (lst_new)
			{
				new_next = lst_new->next;
				(*del)(lst_new->content);
				free(lst_new);
				lst_new = new_next;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&lst_new, new_next);
		lst = lst->next;
	}
	return (lst_new);
}
