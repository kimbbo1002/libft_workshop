/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:57:18 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:53:54 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_striteri applies f to each character in s

return value :
none
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
//pointer to a function as a parameter
// The name of a function is its address !!
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);	//apply function f to each char until string s is finished
		i++;
	}
}
