/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:15:53 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:56:22 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_memmove copies len bytes from src to dst
- memory areas may overlap (difference from ft_memcpy)

return value :
- pointer to dst
- NULL if src and dst are both NULL
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else	//in case of memory overlap, copy from the last char
	{
		i = len;
		while (i > 0)
		{
			i--;
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		}
	}
	return (dst);
}
