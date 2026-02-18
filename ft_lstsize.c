/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:43:34 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:05:27 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_lstsize counts the number of nodes in the list

return value :
the length of the list
*/

int	ft_lstsize(t_list *lst)
{
	int	count;	//size of the list

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;	//move on to the next node
	}
	return (count);
}
