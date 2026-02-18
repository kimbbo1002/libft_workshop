/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:54:11 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:23 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION :
ft_calloc allocated memorty for an array and fills the memory with 0

return value :
- pointer to the allocated memory
- NULL if memory allocation fails
- if n or size is 0, a unique pointer value that can be successfully passed 
to free()
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*res;

	if (nmemb != 0 && size > SIZE_MAX / nmemb) //check if nmemb*size results in int overflow
		return (0);
	res = malloc(size * nmemb);
	if (!res)
		return (0);
	ft_memset(res, 0, size * nmemb);
	return (res);
}