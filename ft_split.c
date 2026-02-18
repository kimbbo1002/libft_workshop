/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:01:46 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 17:24:18 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_split allocates and copies an array of strings by splitting the given
string s using the given separator c

return value :
- array of strings resulting from the split
- NULL if memory allocation fails
*/

static int	check_malloc(char *str, char **res) //function to handle leaks
{
	int	i;

	i = 0;
	if (!str)	//if allocation failed loop through array and free all
	{
		while (res[i])
			free(res[i++]);
		free(res);
		return (0);
	}
	else
		return (1);
}

static int	count_group(char const *s, char c) //function to count how many words are in the string
{
	int	i;
	int	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != (unsigned char)c)	//if its a start of a word
		{
			count++;	//add word count
			while (s[i] && s[i] != (unsigned char)c)	//skip until the end of the word
				i++;
		}
		else	//if its a delimiter, move to next char
			i++;
	}
	return (count + 1);
}

static char	*assign_word(char *str, char c)	//extracts each word and allocates it
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != (unsigned char)c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	i = 0;
	while (str[i] && str[i] != (unsigned char)c)	//copy word until it ends
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * count_group(s, c));
	if (!res || !s)
		return (0);
	while (s[i])
	{
		if (s[i] != (unsigned char)c)	//if a word starts
		{
			res[j] = assign_word((char *)&s[i], c);	//assign word
			if (!check_malloc(res[j++], res))	//check allocation 
				return (0);
			while (s[i] && s[i] != (unsigned char)c)	//skip until the end of the word
				i++;
		}
		else	//if it is a delimiter, move to next char
			i++;
	}
	res[j] = 0;
	return (res);
}
