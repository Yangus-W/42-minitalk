/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:19:45 by yawang            #+#    #+#             */
/*   Updated: 2023/12/09 16:22:46 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !(*lst) || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		(*del)(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		(*del)((*lst)->content);
		free(*lst);
		(*lst) = (*lst)->next;
	}
}*/
