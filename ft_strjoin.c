/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:07:33 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 16:08:31 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_strjoin allocates memory to a new string and concatenates s1 and s2

return value :
- pointer to new string
- NULL if memory alloc fails
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1; //calculate total length for allocation
	res = malloc(sizeof(char) * len);
	if (!res)
		return (0);
	ft_strlcpy(res, s1, len);	//copy s1 into res
	ft_strlcat(res, s2, len);	//append s2 into res
	return (res);
}