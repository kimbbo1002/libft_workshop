/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:31:41 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:24:09 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_strnstr searches first n bytes of big for the first occurence of little

return value :
- if little is an empty string : big
- if little is not found : NULL
- when found : pointer to first char of first occurence of little in big
*/

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;	//index of big
	size_t	j;	//index of little
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0 || big == little)
		return ((char *)big);
	i = 0;
	while (i < n && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < n)
		{
			j++; //go to next letter of little
			if (!little[j])	//if little has ended (= little is found)
				return ((char *)&big[i]);	//return index of big where first letter of little was found
		}
		i++;	//move on to next letter of big
	}
	return (0);
}
