/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:34:44 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:51:54 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_strchr finds the first occurence of c in str

return value :
- pointer to the first occurence of c in str
- NULL if c is not found
*/

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	len;
	char	*s;

	s = (char *)str;
	len = ft_strlen(str);
	if ((unsigned char)c == '\0')	//if c is 0 return a pointer to the last index of s
		return (&s[len]);
	i = 0;
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)	//when char c is found, directly return the address
			return (&s[i]);
		i++;
	}
	return (0);
}
