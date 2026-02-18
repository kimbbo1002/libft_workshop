/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:51:27 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:36 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION :
ft_lstadd_back adds a new node to the back of a list

return value :
none
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst) //if there is no existing node in the list
	{
		*lst = new;	//set new node as the first and end function
		return ;
	}
	last = ft_lstlast(*lst);	//go to last node of the list
	last->next = new;	//add new node to the next node of the last node
}
