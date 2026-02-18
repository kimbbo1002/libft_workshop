/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:00:02 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 16:04:36 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_strlcat appends src to the end of dst
space for '\0' must be included in dstsize

return value :
total length of the string it tried to create
- dstsize > length of dst : length of dst + length of src
- dstsize <= length of dst : dstsize + length of src
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)	//does not append, just directly returns
	// dstsize is supposed to represent the total size of the buffer.
	// if dst_len >= dstsize, it means the buffer is already full
		return (dstsize + src_len);
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
