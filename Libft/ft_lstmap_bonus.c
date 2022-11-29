/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/29 16:57:07 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*first_node;

	if (!lst || !f || !del)
		return (NULL);
	new_node = ft_lstnew(lst -> content);
	if (!new_node)
		return (NULL);
	first_node = new_node;
	lst = lst -> next;
	while (lst)
	{
		new_node -> next = ft_lstnew(lst -> content);
		if (!new_node -> next)
		{
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		new_node = new_node -> next;
		lst = lst -> next;
	}
	new_node -> next = NULL;
	return (first_node);
}
