/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:35:23 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:54:57 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_memcpy copies n btyes from src to dst
- does not account for memory overlaps

return value :
- pointer to dst
- NULL if src and dst are both NULL
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i); //cast from void to unsigned char
		i++;
	}
	return (dst);
}
