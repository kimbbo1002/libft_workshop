/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>	            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:03:06 by bokim             #+#    #+#             */
/*   Updated: 2025/11/11 22:40:25 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_strrchr finds the last occurence of char c in str

return value :
- pointer to last occurrence of c in str
- NULL if c is not found
*/

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;	//index for s
	size_t	res;
	size_t	len;
	char	*s;

	i = 0;
	res = 0;
	len = ft_strlen(str);
	s = (char *)str;
	if ((unsigned char)c == '\0')	//if c is 0 return a pointer to the last index of s
		return (&s[len]);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			res = i;	//save index of s where char c appeared
		i++;
	}
	if (res == 0 && s[res] != (unsigned char)c)	//check if c hasn´t appeared
		return (0);
	return (&s[res]); //return index of last appeareance of char c
}