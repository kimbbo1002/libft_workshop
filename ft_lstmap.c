/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:31:02 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:50 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_lstmap iterates through the list, applies the function f 
to each node's content, and creates a new list resulting of the successive 
applications of the function f

return value :
- the new list
- NULL if the allocation fails
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;	//new list to return 
	t_list	*new_node;	//new node to add to new list
	void	*new_content;	//new content to add to new node
	
	//differentation between new_node and new_content is essential to deal with failed allocation

	if (!lst)
		return (0);
	new_list = 0;
	while (lst)
	{
		new_content = f(lst->content); //apply function and save result to new_content
		new_node = ft_lstnew(new_content);	//create a new node
		if (!new_node)	//if allocation fails
		{
			del(new_content);	//delete new_content
			ft_lstclear(&new_list, del);	//clear the whole list
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);	//add new_node to the end of new_list
		lst = lst->next;
	}
	return (new_list);
}
