/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:02:45 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:49:17 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_strmapi applies function f to each character in s and allocates memory 
to store the resulting new string

return value :
- pointer to the newly created string
- NULL if memory allocation fails
*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
//pointer to a function as a parameter
// The name of a function is its address !!
{
	unsigned int	i;
	char			*res;

	if (!f)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);	//apply function f to every char
		i++;
	}
	res[i] = '\0';
	return (res);
}