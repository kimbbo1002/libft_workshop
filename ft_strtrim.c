/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>	            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:13:19 by bokim             #+#    #+#             */
/*   Updated: 2025/11/13 22:29:16 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION : 
ft_strtrim allocates memory and returns a copy of s1 with characters from set
removed from the beginning and the end

RETURN VALUE : 
- the trimmed string
- NULL if allocation fails
*/

static int	is_set(char c, char const *set) //function to check if given char is in set
{
	int	i;

	i = 0;
	while (set[i])
	{
		if ((unsigned char)c == (unsigned char)set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0; //initialize start index
	while (s1[start] && is_set(s1[start], set)) //set start index to skip while it is a char from set
		start++;
	end = ft_strlen(s1);	//initialize end index
	while (end > start && is_set(s1[end - 1], set)) //set end index skip while it is a char from set
		end--;
	res = malloc(sizeof(char) * (end - start + 1));	
	if (!res)
		return (0);
	ft_strlcpy(res, &s1[start], end - start + 1);	//copy (end-start + 1) bytes (including null byte) from start index
	return (res);
}
