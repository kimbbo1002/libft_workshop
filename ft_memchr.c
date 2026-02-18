/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>    	        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:55:17 by bokim             #+#    #+#             */
/*   Updated: 2025/11/11 23:29:13 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_memchr serches n bytes of the memory pointed by s for the first occurence
of c. 

return value :
- a pointer to the matching byte
- NULL if the character does not occur
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)s;	//cast to unsigned char from void
	while (i < n)
	{
		if (res[i] == (unsigned char)c)	//when char is found, return the address
			return (&res[i]);
		i++;	//move on to next char
	}
	return (0);
}