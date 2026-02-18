/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:41:25 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 16:14:16 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION :
ft_substr allocates memory and returns a substring from the string s.
the substring starts at index start and has a max length of len.

RETURN VALUE :
- the substring
- NULL if the allocation fails
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*res;

	if (!s)
		return (malloc(0));
	s_len = ft_strlen(s);
	if (start >= s_len)	//if start is beyond the string, the substring is empty
		return (ft_strdup(""));
	if (len > s_len - start)	//adjust len if it is too long
		len = s_len - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	ft_strlcpy(res, &s[start], len + 1);
	return (res);
}