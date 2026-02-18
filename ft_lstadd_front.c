/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:14:16 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:37 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION :
ft_lstadd_front adds a new node to the front of a list

return value :
none
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)	//if there is no existing node in the list
	{
		*lst = new;	//set new node as the first and end function
		return ;
	}
	new->next = *lst;	//set the head node of the list as the next node of the new node
	*lst = new;	//set the new node as the head node
}
