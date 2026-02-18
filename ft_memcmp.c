/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:06:52 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:11:38 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_memcmp compares the first n bytes of s1 and s2

return value :
- positive value if ( char of s1 > char of s2 )
- negative value if ( char of s1 < char of s2 ) 
- 0 if same
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cpy1;
	unsigned char	*cpy2;

	i = 0;
	cpy1 = (unsigned char *)s1; //casting to unsigned char
	cpy2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cpy1[i] != cpy2[i]) //if char is different
			return (cpy1[i] - cpy2[i]); //directly return the value of s1[i] - s2[i]
		i++;
	}
	return (0);	//when all char is same, return 0
}
